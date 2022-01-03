const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [a,b,c] = input.split('\n').map(Number);

const average = (a * 2 + b * 3 + c * 5) / 10;

process.stdout.write(`MEDIA = ${average.toFixed(1)}\n`);
