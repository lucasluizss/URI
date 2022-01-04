const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [employeeNumber,workedHours,amountPerHour] = input.split('\n').map(Number);

const salary = workedHours * amountPerHour;

process.stdout.write(`NUMBER = ${employeeNumber}\n`);
process.stdout.write(`SALARY = U$ ${salary.toFixed(2)}\n`);
