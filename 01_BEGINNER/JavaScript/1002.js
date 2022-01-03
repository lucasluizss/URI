const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const r = +input;
const PI = 3.14159;

const area = PI * (r ** 2);

process.stdout.write(`A=${area.toFixed(4)}\n`);
