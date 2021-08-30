function backwards (str) {
    let placeholder = "";
    let arr = [];
    for (var i = 0; i < str.length; i++) {
      arr.push(str.substring(i,i+1));
    }
    for (var j = arr.length-1; j > 0; j--) {
      placeholder += arr[j];
    }
    placeholder += arr[0];
    return placeholder;
}
  
let temp = 0;
  
for (var i = 100; i < 999; i++) {
    for (var j = 100; j < 999; j++) {
      let product = i * j;
      let productStr = product.toString();
        let first = productStr.substring(0,productStr.length/2)
        let second = productStr.substring(productStr.length/2,productStr.length)
          if ( first == backwards(second) ) {
            if (productStr > temp) {
              temp = productStr;
            }
        }
    }
}
  console.log(temp);
