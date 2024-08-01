// <!-- // Define an object literal and this-->
const person = {
    firstName: 'Bibek',
    lastName: 'Rawal',
    age: 21,
    isStudent: true,
    greet: function() {
        console.log('Hello, my name is ' + this.firstName + ' ' + this.lastName);
    },
    address: {
       
        city: 'Jumla',
        District: 'Karnali'
    }
};

// Accessing object properties
console.log(person.firstName); // Outputs: John

// Calling a method
person.greet(); // Outputs: Hello, my name is John Doe

// Accessing nested object properties
console.log(person.address.city); // Outputs: Anytown
