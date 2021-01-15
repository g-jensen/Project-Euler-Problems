function factorial (n) {
    if (n != 1) {
      return (n * factorial(n - 1));
    } else {
      return n;
    }
}
  
function latticePath (n) {
    let output = factorial(2 * n) / factorial(n)**2;
    return output;
}

console.log(latticePath(20));
