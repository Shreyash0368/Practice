const Cheerio = require('cheerio');
const request = require('request');

let url = 'https://www.espncricinfo.com/series/ipl-2020-21-1210595/chennai-super-kings-vs-kings-xi-punjab-53rd-match-1216506/ball-by-ball-commentary/';

console.log('The last ball commentary is:');
request(url, function (error, response, body) {
    if (error) {
        console.error('error:', error); // Print the error if one occurred
    }
    else {
        htmlHandler(body);
    }
});

function htmlHandler(body) {
   let $ = Cheerio.load(body);
   let divContent = $('div.ds-ml-4 p');

   
   console.log($(divContent[0]).text());
   
}