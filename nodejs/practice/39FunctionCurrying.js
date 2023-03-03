// the practice of creating new functions from older functions using bind is called function currying 
// It is very usefull in case of objects as creating the same function for every object of the same type is meaning less

function add(x, y) {
    return x + y;
}

const addWith2 = add.bind(this, 2);
console.log(addWith2);
console.log(addWith2(4));

const addWith4 = add.bind(this, 4);
console.log(addWith4(4));

