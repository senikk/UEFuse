var Observable = require("FuseJS/Observable");
var LocalNotify = require("FuseJS/LocalNotifications");

var username = Observable("senikk");
var password = Observable("grok2Zul_");
var companies = Observable();
var logedin = Observable(false);
var page = Observable('');

var jwt = null;
var companykey = null;
var status = 0;

/* API */
function ue(method, path, body, callback) {
	status = 0;
	var headers = new Headers();
	headers.append('Content-Type', 'application/json');
	headers.append('Accept', 'application/json');
	headers.append('Cache-Control', 'no-cache');
	if (jwt) { headers.append('Authorization', 'Bearer ' + jwt); }
	if (companykey) { headers.append('CompanyKey', companykey); }

	var options = {
		method: method,
		headers: headers,
		body: body ? JSON.stringify(body) : ''
	};

	fetch('https://devapi-unieconomy.azurewebsites.net' + path, options).then(function(response) { 
		status = response.status;
		return response.json(); 
	  })
	  .then(function(data) {
	 	callback(data);
	  })
	  .catch(function(error) {
	  	console.log("ue failed on https://devapi-unieconomy.azurewebsites.net" + path + " " + status, JSON.stringify(error));
	  });	
}

function ueSignIn(callback) {
	jwt = null;
	ue('POST', '/api/init/sign-in', {username: username.value, password: password.value}, function (access) {
		jwt = access.access_token;
	 	ueCompanies(callback);
	})
}

function createImageUrl(fileid, companykey, token) {
	return encodeURI('https://uniimages.azurewebsites.net/?id=' + fileid + '&key=' + companykey + '&width=100&token=' + token);
}

function ueCompanies(callback) {
	ue('GET', '/api/init/companies', null, function(list) {
  		list.forEach(function(c, idx, arr) {
  			companykey = c.Key;
  			ue('GET', '/api/biz/companysettings/1', null, function (settings) {
  				c['Settings'] = settings;
  				if (settings.LogoFileID) {
  					c['LogoUrl'] = createImageUrl(settings.LogoFileID, c.Key, jwt);
  				} else {
  					c['LogoUrl'] = '';
  				}
  				console.log(JSON.stringify(c));
  				companies.add(c);	  
  				
  				// last one
  				if (idx == arr.length - 1) {
  					callback();
  				}	
  		  	});	
  		});
  	});
}

/* */

function login(arg) {
	ueSignIn(function() {
		logedin.value = true;
	});
}

function companySelected(event) {
	var company = event.data;
	companykey = company.Key;

	page.value = "somethingpage";
	LocalNotify.now("Boom!", company.Name, "payload", true);

	console.log(company.Name);
}

module.exports = {
	username: username,
	password: password,
	companies: companies,
	login: login,
	logedin: logedin,
	companySelected: companySelected,
	page: page
};
