#include <cstdio>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    char buf[1];
    gets(buf);
    char a[102][102];
    for (int i = 0; i < 102; i++) 
        for (int j = 0; j < 102; j++) 
            a[i][j] = '#';
    int r, c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) { 
            scanf("%c", &a[i][j]); 
            if (a[i][j] == 'P') {
                r = i; 
                c = j; 
                a[i][j] = '.'; 
            }
        }
        gets(buf);
    }
    for (int i = 1; i <= m; i++) 
        a[n + 1][i] = '.'; 

    enum { LEFT, RIGHT, DOWN } dir = DOWN;
    while (r != n + 1) {
        if (a[r][c] == '#') {
            c = -1;
            break;
        }
        if (a[r][c] == '.') {
            r++;
            dir = DOWN;
        } else if (a[r][c] == '/') { 
            if (dir == RIGHT) {
                c = -1;
                break;
            }
            if (dir == LEFT)
                r++, dir = DOWN;
            else
                c--, dir = LEFT;
        } else if (a[r][c] == '\\') {
            if (dir == LEFT) {
                c = -1;
                break;
            }
            if (dir == RIGHT)
                r++, dir = DOWN;
            else
                c++, dir = RIGHT;
        }
    }

    printf("%d", c);
    return 0;
}
