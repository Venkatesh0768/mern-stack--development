//Callback Example
function myDisplay(value) {
  console.log(value);
}

function sumOftheTwoNumber(num1, num2, myDisplay) {
  let result = num1 + num2;
  myDisplay(result);
}

sumOftheTwoNumber(5, 1, myDisplay);

//promises

let myPromise = new Promise(function (myResolve, myReject) {
  myResolve(); // when successful
  myReject(); // when error
});

myPromise.then(
  function (value) {
    console.log("Sucessful");
    
    /* code if successful */
  },
  function (error) {
    console.log("Sucessful");
    /* code if some error */
  }
);
