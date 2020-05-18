#include <cstdio>
using namespace std;

int main() {
    int n, m;
    scanf(" %d %d ", &n, &m);
    int c;
    while ((c = getchar()) != EOF) {
        char ch = (char) c;
        if (ch == 'C' || ch == 'M' || ch == 'Y') {
            puts("#Color");
            return 0;
        }
    }
    puts("#Black&White");
}

