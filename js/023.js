// function to find divisors of a number
function divisors (n) {
  let list = [];
  for (var i = 0; i < n; i++) {
    if (n % i == 0) {
      list.push(i);
    }
  }
  return list;
}

// function to find the sum of the numbers in a list
function sumOf (l) {
  let sum = 0;
  for (var i = 0; i < l.length; i++) {
    sum += l[i];
  }
  return sum;
}

// function to return if a number is abundant or not
function isAbundant (n) {
  let d = divisors(n);
  let s = sumOf(d);
  if (n < s) {
    return true;
  } else {
    return false;
  }
}

var abundantList = [];
var canAbundant = Boolean;

// put all the abundant numbers in a list
for (var i = 0; i < 28123; i++) {
  if (isAbundant(i) == true) {
    abundantList.push(i);
  }
}
/**
 assign each number in the abundant list a boolean based on if
 they can be written as sum of 2 abundant numbers
**/
for (var i = 0; i < abundantList.length; i++) {
  for (var k = 0; k < abundantList.length; k++) {
    let sum = abundantList[i] + abundantList[k];
    if (sum <= 28123) {
      canAbundant[sum] = true;
    }
  }
}

// go through each number until the given limit and check if it can be written as sum of 2 abundant numbers
var sum = 0;
for (var i = 0; i < 28123; i++) {
  if (canAbundant[i] != true) {
    sum += i;
  }
}
console.log(sum);
