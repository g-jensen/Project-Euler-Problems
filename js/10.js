function isPrime (n) {
    var square_root = Math.sqrt(n);
    for (var i = 2; i <= square_root; i++) {
      if ((n % i == 0) || (n % 2 == 0)){
        return(false)
      }
    } 
    return(true);
}

var sum = 0;

for (var i = 2; i < 2000000; i++) {
  if (isPrime(i) == true) {
    sum += i;
  }
}

console.log(sum);
