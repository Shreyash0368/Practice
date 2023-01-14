let fs = require("fs");
let path = require("path");
const { join } = require("path/posix");
let buffer = fs.readFileSync("4intro.js");
// when we output like this we will only get the output as a binary file
// console.log("buffer data is: ", buffer );
// to get the proper string output we need to concat like in a string
// in output we will get the code we had written in the file

console.log("--------------readind a js file--------------");
console.log("buffer data is: \n" + buffer );

// now the file creat read write cmds
//write file sync will create the file if no such file is found
// fs.openSync("abc.txt", 'w');
// the main disadv is that if we run the cmd on thse samw file it will rewrite the older text 
fs.writeFileSync("abc.txt", "hello boi");
fs.writeFileSync("abc.txt", "hello boi u too");
// to update content we use append 
fs.appendFileSync("abc.txt", " nice to meet u");
// mkdirsync is used to creat a directory at the given path
let dirName = "directory";
// fs.mkdirSync(dirName);

// Now we can create a file inside the directoy 
// fs.openSync(path.join(dirName, "abc2.txt"), "w");
// before deleting a file always close it properly else the system still thunks that the file is present
// 

// using readdirsync we can read the contents of a directory and
// the namesof the file/subdirectories will be stored in an array
console.log("--------------reading nodejs directory--------------");
let content = fs.readdirSync(__dirname);
for (let index = 0; index < content.length; index++) {
    console.log(content[index]);    
}

// if a directory is absent it will throw error
// content = fs.readdirSync(dirName);
// unlinksync is used to delete files from a directory
for (let index = 0; index < content.length; index++) {
    // console.log("file removed "+ content[index]);
    // fs.unlinkSync("directory/"+content[index]);    
}
// rmdirsync is used to delete a directory but the directroy should be empty and not be acessed by any program
// fs.rmdirSync(dirName);

console.log("----------checking existence and type of file--------------");

// fs.existsSync tells us whether the given file name exits at the given location or not
console.log(fs.existsSync("abc.txt"));
console.log(fs.existsSync("abc2.txt"));

// lstat returns whether the object at the end of the given path is a file or a folder
let object = fs.lstatSync(__dirname);
console.log(object.isDirectory());
console.log(object.isFile());

// bot linux/MACos and windows have different ways in which their file path is written 
// so if we hardcode a file path it will cause error on other systems so the path module has inbuilt functions for such purpose

// path.join()  this is for joining to paths and returns the combined path
// path.extname returns the extension of the file in input
console.log(path.extname(path.join(__dirname, "4intro.js")));

// this returns the file/directory name at the end of the given path
console.log(path.basename(path.join(__dirname, "4intro.js")));
console.log(path.basename(__dirname));