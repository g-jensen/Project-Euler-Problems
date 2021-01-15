var cnt = 1;
var temp = 0;
var startNum = 0;

function iterate (n) {
  let newVar;
  if (n == 1) {
    return;
  }
  if (n % 2 == 0) {
    newVar = n/2
    cnt += 1
    iterate(newVar);
  } else {
    newVar = (3 * n) + 1;
    cnt +=1
    iterate(newVar);
  }
  
}


for (var i = 999999; i > 0; i--) {
  cnt = 1;
  iterate(i);
  if (cnt > temp) {
    temp = cnt;
    startNum = i;
  }
}
console.log(startNum);
