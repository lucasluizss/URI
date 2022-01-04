const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n').map(line => line.split(' '));

lines.pop();

let total = 0;

for (let [,productUnits,productPrice] of lines) {
    total += +productUnits * +productPrice;
}

process.stdout.write(`VALOR A PAGAR: R$ ${total.toFixed(2)}\n`);
