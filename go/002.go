package main

import (
    "fmt"
)

func fib (num int) int {
    var slot1 int = 1
    var slot2 int = 1
    var placeholder int
    var sum int = 0;
    for slot2 < num {
        placeholder = slot1 + slot2
        slot1 = slot2
        slot2 = placeholder
        if (slot2 % 2 == 0) {
            sum += slot2
        }
    }
    return sum
}


func main () {
    fmt.Println(fib(4000000))
}
