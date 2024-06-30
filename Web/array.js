const arr = ["Ram", "Shyam", "Hari", "Avi"]

function detail(fname, lname, sex, age){
    this.fname = fname;
    this.lname = lname;
    this.sex = sex;
    this.age = age;
}

for (let i in arr){
    console.log(arr[i])
}

const person = [
    new detail("Bibek", "Rawal", "Male", "21"),
    new detail("Prabesh", "Tamang", "Male", "21"),
    new detail("Nirjal", "Pandit", "Male", "22")
]

let p1 = new detail("Bibek", "Rawal", "Male", "21")
let p2 = new detail("Prabesh", "Tamang", "Male", "21")
let p3 = new detail("Nirjal", "Pandit", "Male", "22")


for (let i in person){
    console.log("Person ", i, ": ", person[i])
}

console.log(arr.join(" + "))         // give any seperation characters

console.log(arr.toString())                // comma seperated

arr.pop()          //remove last
arr.push("Simple")  // add to end
arr.shift("Timi")   // add to start
arr.unshift()    //remove from start

