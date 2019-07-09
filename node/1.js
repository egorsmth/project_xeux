process.stdin.resume();
process.stdin.setEncoding('utf8');

let data;

process.stdin.on('readable', function(chunk) {
    const n = parseInt(process.stdin.read()) - 1;
    const m = parseInt(n / 3);
    let sum = 0;
    for (let i = 1; i <= m; i++ ) {
        sum += i*3;
    }

   const m2 = parseInt(n / 5);
   for (let i = 1; i <= m2; i++) {
      if (i % 3 == 0) continue;
      sum += i * 5;
   }
  console.log(sum);
    process.exit(0);
});

