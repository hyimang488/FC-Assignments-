const employees = [
    { id: 1, name: "Amit", department: "IT", salary: 50000 },
    { id: 2, name: "Sneha", department: "HR", salary: 45000 },
    { id: 3, name: "Rohit", department: "IT", salary: 60000 },
    { id: 4, name: "Priya", department: "Finance", salary: 55000 },
    { id: 5, name: "Neha", department: "HR", salary: 48000 }
];

// Display all employees
function displayEmployees() {
    console.log("All Employees:");

    employees.forEach(employee => {
        console.log(
            employee.id,
            employee.name,
            employee.department,
            employee.salary
        );
    });
}

// Find employees by department
function findByDepartment(department) {
    return employees.filter(employee =>
        employee.department === department
    );
}

// Calculate average salary
function calculateAverageSalary() {
    let totalSalary = 0;

    employees.forEach(employee => {
        totalSalary += employee.salary;
    });

    return totalSalary / employees.length;
}

// Find employee with highest salary
function findHighestSalary() {
    let highest = employees[0];

    for (let employee of employees) {
        if (employee.salary > highest.salary) {
            highest = employee;
        }
    }

    return highest;
}

displayEmployees();

console.log(
    "Employees in IT Department:",
    findByDepartment("IT")
);

console.log(
    "Average Salary:",
    calculateAverageSalary()
);

console.log(
    "Employee With Highest Salary:",
    findHighestSalary()
);