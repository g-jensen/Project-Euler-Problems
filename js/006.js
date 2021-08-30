function sumOfSquares (max) {
    let sum = 0;
    for (var i = 1; i <= max; i++) {
      sum += i**2;
    }
    return (sum);
}
  
function squareOfSums (max) {
    let sum1 = 0;
    for (var i = 1; i <= max; i++) {
      sum1 += i;
    }
    sum1 = sum1 * sum1;
    return sum1;
}

function log () {
    var start = Date.now();

    console.log(squareOfSums(100) - sumOfSquares(100));
    
    var end = Date.now() - start;

    console.log(end + " milliseconds");
}
log();
