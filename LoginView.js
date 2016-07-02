var Observable = require("FuseJS/Observable");

var username = Observable("senikk");
var password = Observable("grok2Zul_");
var companies = Observable();
var logedin = Observable(false);
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
  		list.forEach(function(c) {
  			companykey = c.Key;
  			ue('GET', '/api/biz/companysettings/1', null, function (settings) {
  				c['Settings'] = settings;
  				if (settings.LogoFileID) {
  					c['LogoUrl'] = createImageUrl(settings.LogoFileID, c.Key, jwt);
  				}
  				companies.add(c);	  	
  		  	});	
  		});

  		callback();
  	});
}

/* */

function login(arg) {
	ueSignIn(function() {
		logedin.value = true;
	});
}

module.exports = {
	username: username,
	password: password,
	companies: companies,
	login: login,
	logedin: logedin,
	demourl: encodeURIComponent("http://uniimages.azurewebsites.net/?id=2&key=dedca729-655a-4c88-9a11-8a9b169ec728&token=Bearer eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJuYW1laWQiOiI4YzY3NmFkNy0wMjc5LTRhODktOWMzZC1mNWJkNjBlMDkyN2IiLCJ1bmlxdWVfbmFtZSI6InNlbmlrayIsImh0dHA6Ly9zY2hlbWFzLm1pY3Jvc29mdC5jb20vYWNjZXNzY29udHJvbHNlcnZpY2UvMjAxMC8wNy9jbGFpbXMvaWRlbnRpdHlwcm92aWRlciI6IkFTUC5ORVQgSWRlbnRpdHkiLCJBc3BOZXQuSWRlbnRpdHkuU2VjdXJpdHlTdGFtcCI6Ijk1YzFkOTc5LTM0OGMtNDhjMy1hZmUzLWMzZTY5MDJjNWM4MSIsInJvbGUiOiJVc2VyIiwiaXNzIjoiaHR0cHM6Ly9pZGVudGl0eS51bmllY29ub215Lm5vIiwiYXVkIjoiNDE0ZTE5MjdhMzg4NGY2OGFiYzc5ZjcyODM4MzdmZDEiLCJleHAiOjE0Njc1NjQ4NDQsIm5iZiI6MTQ2NzQ3ODQ0NH0.z4YvVqyeEBjJ_VRnjnX44HVodqbH7eqB0QqkRHJDw8s&width=50")
};
