process.stdin.setEncoding('utf8');
function sum3(n) {
    var sum = 0;
    for (var i = 1; i <= n; i++) {
        sum += i * 3;
    }
    return sum;
}
function sum5(n) {
    var sum = 0;
    for (var i = 1; i <= n; i++) {
        if (i % 3 === 0)
            continue;
        sum += i * 5;
    }
    return sum;
}
process.stdin.on('readable', function () {
    var chunk = process.stdin.read();
    var n = parseInt(chunk.toString()) - 1;
    console.log(sum3(n / 3) + sum5(n / 5));
});
