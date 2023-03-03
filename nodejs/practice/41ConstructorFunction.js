// constructor funstions are used as a way of replacing constructors from other OOP languages like cpp and java
//  they are used to create new objects based on pre defined templates just like in normal constructors
// these functions have to be used along with the new keyword as because of new the function will return an empty object instead of the global object like we saw in the 'this' video

function carConstructor(company, model, color) {
    this.company = company;
    this.model = model;
    this.color = color;
}

let car1 = new carConstructor("BMW", "X5", "blue");
console.log(car1);
let car2 = new carConstructor("audi", "A8", "red");
console.log(car2);


