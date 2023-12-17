let arr = [1, 2, 3, 'something', null, true];
let countEven = 0;
let countOdd = 0;
let countOther = 0;
function countNumbers () {
for (let i = 0; i < arr.length; i++){
if ((arr[i] === 0) || (typeof(arr[i]) != 'number')) {
countOther++;
} else {
if (arr[i] % 2 === 0) {
countEven++;
} else {
countOdd++;
}
}
}
console.log("Even is " + countEven);
console.log("Odd is " + countOdd);
console.log("Other is " + countOther);
};
countNumbers();