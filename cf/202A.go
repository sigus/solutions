package main

import "fmt"

func is_palindrome(s string) bool {
    for i := 0; i < len(s)/2; i++ {
        if s[i] != s[len(s) - 1 - i] {
            return false
        }
    }
    return true
}

func main() {
    var s, p string
    fmt.Scanf("%s", &s)
    for i:= 0; i <= 1 << uint(len(s)) - 1; i++ {
        k := 0
        t := ""
        for j := i; j != 0; j /= 2 {
            if j%2 != 0 {
                t += s[k:k+1]
            }
            k++
        }
        if is_palindrome(t) && t > p {
            p = t
        }
    }
    fmt.Println(p)
}
