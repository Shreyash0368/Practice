const path = require("path");
const fs = require("fs");
const process = require("process");
const { argv } = require("process");

let input = process.argv;
let source = input[2];
let fileName = path.basename(source);
// console.log(fileName);
let destination = path.join(input[3], fileName);
// console.log(destination);

// fs.copyFileSync(source, destination);



console.log(path.basename(`C:\\Users\\shrey\\Desktop\\CODE_PRACTICE\\nodejs\\fileManagerProject\\abc.txt`));


// fs.copyFileSync(imgPath, endPath);
// endPath = path.join(endPath, imgname);
// fs.openSync(endPath, 'w');

// fs.copyFileSync("abc.txt", "hello.txt");

