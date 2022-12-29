// npm is a package/module manager for node.js and the different modules provide different functionalities

// Importing CHALK module this helps us print output with color in terminal
const chalk=require("chalk");
const figlet = require("figlet");

// Printing the text
console.log(chalk.blue.bold(figlet.textSync("HELLO")))
