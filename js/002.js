var slot1 = 1;
var slot2 = 2;
var sum = 2;

while (slot2 < 4000000) {
    var temp = slot1 + slot2;
    slot1 = slot2;
    slot2 = temp;
    if (slot2 % 2 == 0) {
        sum += slot2;
    }
}
console.log(sum);
