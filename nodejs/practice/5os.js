// using os module we can access os functionalities
let os = require("os");
// tells us the architecture 32/64
console.log(os.arch());
// tells us the os
console.log(os.platform());
// gives detail about ur internet network like ip adress, protocols used etc 
console.log("`````````````````````````````````");
console.log(os.networkInterfaces());
console.log("`````````````````````````````````");
// gives detail about the cpu resources
console.log(os.cpus());
