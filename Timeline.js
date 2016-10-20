var Observable = require("FuseJS/Observable");
var timeline = Observable();

timeline.add({Title: 'Faktura', Number: 5 });
timeline.add({Title: 'Ordre', Number: 1});

module.exports = {
	timeline: timeline
};