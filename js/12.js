function triangle(n) {
    let sum = 0;
    for (var i = n; i > 0; i--) {
      sum += i;
    }
    return sum;
}
  
function findDivisorCnt (n) {
    let cnt = 1;
    for (var i = 0; i <= Math.sqrt(n) + 1; i++) {
      if (n % i == 0) {
        cnt += 1
      }
    }
    return cnt;
}
  
for (var g = 7; g > 6; g++) {
    let triangleValue = triangle(g);
    if (findDivisorCnt(triangleValue) > 500/2) {
      console.log(triangleValue);
      g = 5;
    }
}
