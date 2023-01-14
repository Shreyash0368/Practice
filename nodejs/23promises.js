// promises are a modern version of callbacks which are used along with async functions 
// they work on simm method as real life tokens (when we go to a resturant and give the order the cashier will give the bill with the promise that our order will be served
// and later when we show the bill we get the items specified in the bill)
// here too we get a promise token which will latergive either the desired result or the error 

const fs = require('fs');

console.log('before');

const promise = fs.promises.readFile('123.txt', 'utf-8');
// let promise = fs.promises.readFile('1234.txt', 'utf-8'); // this will give error which will be displayed by the callback function
console.log(promise);

promise.then(function (data) {
    // console.log('then called', data);
    console.log(data);
});
promise.catch(function (err) {
    console.log(err);
});

console.log('after');