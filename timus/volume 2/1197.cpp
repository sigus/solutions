#include <cstdio>

int in_field(int h, int v) {
    return (h >= 0) && (h <= 7) && (v >= 0) && (v <= 7);
}

int main() {
    int n;
    scanf(" %d", &n);
    char buf[10];
    gets(buf);
    for (int i = 0; i < n; i++) {
        gets(buf);
        int cnt = 0;
        int h = buf[0] - 'a', v = buf[1] - '1';
        cnt += in_field(h - 2, v - 1);
        cnt += in_field(h - 1, v - 2);
        cnt += in_field(h + 2, v - 1);
        cnt += in_field(h + 1, v - 2);
        cnt += in_field(h + 2, v + 1);
        cnt += in_field(h + 1, v + 2);
        cnt += in_field(h - 2, v + 1);
        cnt += in_field(h - 1, v + 2);
        printf("%d\n", cnt);
    }
    return 0;
}
