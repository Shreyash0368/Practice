const puppeteer = require('puppeteer');
const browser = puppeteer.launch({headless: false , slowMo: 50});

let page;

browser.then(function(browser) {
    const pageArray = browser.pages();
    return pageArray;
})
.then(function(pageArray) {
    page = pageArray[0]
    const pageContext  = page.goto('https://www.google.com/');    
    
    return pageContext;
})
.then (function () {
    const querySelector = page.waitForSelector('input[type="text"]');
    return querySelector;
})
.then(function (querySelector) {
    const typePromise = page.type('input[type="text"]', 'pepcoding');
    
    return typePromise;
})
.then(function (typePromise) {
    const pressPromise = page.keyboard.press('Enter');  
    return pressPromise;  
}).then (function (pressPromise) {
    const querySelector = page.waitForSelector('h3.LC20lb.MBeuO.DKV0Md');
    return querySelector;
}).then (function (querySelector) {
    // page.hover('h3.LC20lb.MBeuO.DKV0Md');
    page.click('h3.LC20lb.MBeuO.DKV0Md', {delay: 50});    
})
.catch(function(err) {
    console.log(err);
})
