var success = 0;

for (var i = 1; i > 0; i++) {
    success = 0;
    for (var k = 1; k <= 20; k++) {
        if (i % k == 0) {
            success += 1;
        } else {
            break;
        }
    }
    if (success == 20) {
        console.log(i);
        return;
    }
}
