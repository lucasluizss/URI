const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [a,b] = input.split('\n').map(Number);

const sum = a * b;

process.stdout.write(`PROD = ${sum}\n`);
