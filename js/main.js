//looping stmts
//for loop
//while loop
//do while loop
//for -of
//for -in


//for of is used for accessing the elements index
//for in example it is only used for objects

var student={
    name:"shivani",
    age:19,
    roll:"20951A04J0",
    adress:{
        city:"Hyderabad",
        state:"Telangana",
        pincode:502032
    }
}
for (const key in student){
    if (key=="address"){
        for (const value in student[key]){
        }
    }else{
        console.log(key,student[key])
    }
}

var arr=[1,2,3,4,5,6,7,8,9,10]
var ans=arr.filter(function(value){
    return value%2==0
})