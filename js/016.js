var bigNum = BigInt(2**1000);
var sum = 0;

for (var i = 0; i < bigNum.toString().length; i++) {
  let temp = parseInt(bigNum.toString()[i]);
  if (isNaN(temp) == false) {
    sum += temp;
  }
}

console.log(sum);
