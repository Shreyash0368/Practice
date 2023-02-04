let arr = [1,2,3,4,5,6];

// in all cases x is the element of the array (this is just a naming convention no hard rule)
// map function mutates all the elements of the array based on the given operation (here it returns square of all the elements)
let newArr = arr.map((x) => x * x)
console.log(newArr);

// filter function filters out the elements of the array based on the gievn condition (the return value of the function inside the parameter is the condition on which filter evaluates)

let filterArr = arr.filter(x => x%2 === 0); // made using arrow constructor
// let filterArr = arr.filter(function (x) {
//     return x%2 === 0;
// })
console.log(filterArr);

// reduce function produces only a single output, here zero (2nd argument is the intial value of acc, and acc + x means that we add all values of x to acc) 
let sum = arr.reduce((accumulator, x) => accumulator + x, 0);
console.log(sum);