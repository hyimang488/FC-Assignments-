// Calculate total marks
function calculateTotal(marks) {
    let total = 0;

    for (let mark of marks) {
        total += mark;
    }

    return total;
}

// Calculate percentage
function calculatePercentage(total, numberOfSubjects) {
    return total / numberOfSubjects;
}

// Calculate grade
function calculateGrade(percentage) {
    if (percentage >= 90) {
        return "A+";
    } else if (percentage >= 80) {
        return "A";
    } else if (percentage >= 70) {
        return "B";
    } else if (percentage >= 60) {
        return "C";
    } else if (percentage >= 50) {
        return "D";
    } else {
        return "F";
    }
}

// Determine pass/fail
function getResult(marks) {
    for (let mark of marks) {
        if (mark < 40) {
            return "Fail";
        }
    }

    return "Pass";
}

// Function calling
const marks = [75, 82, 68, 90, 77];

const total = calculateTotal(marks);

const percentage = calculatePercentage(
    total,
    marks.length
);

const grade = calculateGrade(percentage);

const result = getResult(marks);

console.log("Total Marks:", total);
console.log("Percentage:", percentage + "%");
console.log("Grade:", grade);
console.log("Result:", result);