const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const [sellerName,salary,totalSales] = input.split('\n').map(Number);

const total = salary + totalSales * 0.15;

process.stdout.write(`TOTAL = R$ ${total.toFixed(2)}\n`);
