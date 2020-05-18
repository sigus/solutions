package main

import "fmt"

func main() {
    var n, a int
    fmt.Scanf("%d", &n)
    for i := 1; n != 0; n /= 10 {
        if n%10 == 7 {
            a += i*2
        } else {
            a += i
        }
        i <<= 1
    }
    fmt.Printf("%d", a)
}
