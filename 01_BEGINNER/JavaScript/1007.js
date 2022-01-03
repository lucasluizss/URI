const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [a,b,c,d] = input.split('\n').map(Number);

const difference = (a * b - c * d);

process.stdout.write(`DIFERENCA = ${difference}\n`);
