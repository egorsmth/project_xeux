process.stdin.setEncoding('utf8');

function sum3(n: number):number {
  let sum = 0;
  for (let i = 1; i <= n; i++) {
    sum += i * 3;
  }
  return sum;
}

function sum5(n: number):number {
  let sum = 0;
  for (let i = 1; i <= n; i++) {
    if (i % 3 === 0) continue;
    sum += i * 5;
  }

  return sum;
}

process.stdin.on('readable', () => {
  var chunk = process.stdin.read();
  const n = parseInt(chunk.toString()) - 1;
  
  console.log(sum3(n/3) + sum5(n/5));
});
