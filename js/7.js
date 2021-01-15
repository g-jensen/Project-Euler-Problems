function isPrime (n) {
    var square_root = Math.sqrt(n);
    for (var i = 2; i <= square_root; i++) {
      if ((n % i == 0) || (n % 2 == 0)){
        return(false)
      }
    } 
    return(true);
}

var start = Date.now();

var primeCount = 0;

for (var i = 2; i > 0; i++) {
    if (isPrime(i) == true) {
      primeCount += 1;
    }
    if (primeCount == 10001) {
      console.log(i)
      console.log(Date.now() - start + " milliseconds");
      break;
    }
    
}
