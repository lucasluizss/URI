const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [a,b] = input.split('\n').map(Number);

const average = (a * 3.5 + b * 7.5) / 11;

process.stdout.write(`MEDIA = ${average.toFixed(5)}\n`);
