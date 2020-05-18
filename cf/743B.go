package main

import (
    "fmt"
    "os"
)

func main() {
    var n, k, u uint64
    fmt.Scanf("%d%d", &n, &k)
    for u = 1; ; u++ {
        fmt.Printf("%d %d\n", k - 1<<(u - 1), (k - 1<<(u - 1))%(2*u))
        if (k - 1<<(u - 1))%(2*u) == 0 {
            fmt.Printf("%d", u)
            os.Exit(0)
        }
    }
}
