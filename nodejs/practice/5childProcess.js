// the commands are what we would generally write directly in the cmd terminal of the pc but we can create a script to automatically do it for us
let cp = require("child_process")
console.log("opening calculaotr");
cp.execSync("calc");
console.log("opening vsc");
cp.execSync("code");
console.log("running js file from another js file");
// we need to store the output in another variable, the module only converts it into binary code
let output = cp.execSync("node 4intro.js");
// hence when we output we have to concat it as string so that binary code is reonverted into readable output
// same is true for any other code we execute
console.log("output is: " + output);