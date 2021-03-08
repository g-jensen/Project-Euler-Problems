package main

import (
  "fmt"
)

func main () {
    var sum int = 0
    for i := 0; i < 1000; i++ {
        if (i % 3 == 0) || (i % 5 == 0) {
            sum += i
        }
    }
    fmt.Println(sum)
}
