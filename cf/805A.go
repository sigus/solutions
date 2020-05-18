package main

import "fmt"

func main() {
    var l, r int
    fmt.Scanf("%d%d", &l, &r)
    if l == r {
        fmt.Printf("%d", l)
    } else {
        fmt.Printf("2")
    }
}
