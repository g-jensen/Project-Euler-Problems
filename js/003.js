var facList = [];
var temp = 0;
const num = 600851475143;

function getFactors (n) {
    for (var i = 0; i < Math.sqrt(n); i++) {
        if (n % i == 0) {
            facList.push(i);
        }
    }
    return facList;
}

function isPrime (n) {
    let square_root = Math.sqrt(n);
    for (var i = 2; i <= square_root; i++) {
        if ((n % i == 0) || (n % 2 == 0)) {
            return false;
        }
    }
    return true;
}

getFactors(num);

for (var i = 0; i < facList.length; i++) {
    if (isPrime(facList[i]) == true) {
        if (facList[i] > temp) {
            temp = facList[i];
        }
    }
}

console.log(temp);
