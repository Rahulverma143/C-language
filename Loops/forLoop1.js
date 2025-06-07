// for loops 
// let i;
for( let i = 1 ; i <= 5 ; i++){
    console.log("i=", i)
}
// console.log(i);     // ReferenceError: i is not defined
// output 1 2 3 4 5  

//--------------------------------------------------------------

for( var a = 1 ; a <= 5 ; a++){
    console.log("a=", a)
}
console.log(a)  // output  6  and var is global scope

// output
// a= 1
// a= 2
// a= 3
// a= 4
// a= 5
// 6