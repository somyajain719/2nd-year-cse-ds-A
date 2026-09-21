// function multiplication (a,b){
//     return a*b
// }

// console.log(multiplication(2,3))

// // let userName = prompt("What is your name?");

// // if (userName !== null) {
// //   console.log("Hello, " + userName);
// // }
// // let num1 = prompt("Enter a number: ");
// // let num2 = prompt("Enter another number: ");
// // let result = parseFloat(num1)*parseFloat(num2);
// // console.log("The product is: " + result);
const button = document.getElementById("submitBtn");
const input1 = document.getElementById("nameInput1");
const input2 = document.getElementById("nameInput2");
const output = document.getElementById("output");

// Listen for the button click
button.addEventListener("click", function() {
  // The .value property grabs whatever the user typed
  const userInput = (input1.value)*(parseFloat(input2.value)); 
  output.textContent = "You typed: " + userInput;
});