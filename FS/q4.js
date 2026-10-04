const numbers = [1, 2, 3, 4, 5];

// Callback for square
function square(number) {
    return number * number;
}

// Callback for cube
function cube(number) {
    return number * number * number;
}

// Callback for even or odd
function checkEvenOdd(number) {
    if (number % 2 === 0) {
        return number + " is Even";
    } else {
        return number + " is Odd";
    }
}

// Function that accepts another function as callback
function processNumbers(numbers, callback) {
    const results = [];

    for (let number of numbers) {
        results.push(callback(number));
    }

    return results;
}

console.log(
    "Squares:",
    processNumbers(numbers, square)
);

console.log(
    "Cubes:",
    processNumbers(numbers, cube)
);

console.log(
    "Even/Odd:",
    processNumbers(numbers, checkEvenOdd)
);