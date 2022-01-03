var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a,b] = input.split('\n').map(Number);

const x = a + b;

process.stdout.write(`X = ${x}\n`);
