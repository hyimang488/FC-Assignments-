// Student object
const student = {
    studentId: 101,
    name: "Rahul Sharma",
    course: "M.Sc. Computer Application",
    marks: [78, 85, 72, 90, 80],
    email: "rahul@example.com"
};

// Display student details
function displayStudent(student) {
    console.log("Student ID:", student.studentId);
    console.log("Name:", student.name);
    console.log("Course:", student.course);
    console.log("Marks:", student.marks);
    console.log("Email:", student.email);
}

// Calculate average marks
function calculateAverage(student) {
    let total = 0;

    for (let mark of student.marks) {
        total += mark;
    }

    return total / student.marks.length;
}

// Determine grade
function determineGrade(average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B";
    } else if (average >= 60) {
        return "C";
    } else if (average >= 50) {
        return "D";
    } else {
        return "F";
    }
}

displayStudent(student);

const average = calculateAverage(student);

console.log("Average Marks:", average);
console.log("Grade:", determineGrade(average));