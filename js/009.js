for (var a = 0; a < 1000; a++) {
    for (var b = 0; b < 1000; b++) {
      for (var c = 0; c < 1000; c++) {
        if (a + b + c == 1000) {
          if (b < c) {
            if (a < b) {
              if (a**2 + b**2 == c**2) {
                console.log(a * b * c);
              }
            }
          }
        }
      }
    }
  }
