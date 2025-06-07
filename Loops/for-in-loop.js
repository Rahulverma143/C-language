// for-in-loop 


let student = {
    name : "Rahul verma",
    age : 20,
    cgpa : 8.5,
    isPass : true
};
for(let key in student){
    console.log("key =", key);
    console.log("key =", key, "value =", student["key"]);
    // console.log("value =", student[key]);
        // console.log("value =", student["key"]);
    console.log("key =", key, "value =", student[key]);

}
// output
// key = name
// key = name value = undefined
// key = name value = Rahul verma
// key = age
// key = age value = undefined
// key = age value = 20
// key = cgpa
// key = cgpa value = undefined
// key = cgpa value = 8.5
// key = isPass
// key = isPass value = undefined
// key = isPass value = true