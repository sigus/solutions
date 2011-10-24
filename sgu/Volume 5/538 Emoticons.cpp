#include <cstdio>
#include <cstring>
#include <cctype>

int main() {
    char s[100010];
    gets(s);

    int l = strlen(s);
    int i = 0;
    int cnt = 0;
    bool opened = false;
    while (i < l)
        if (!opened) {
            if (s[i] == '(')
                opened = true;
            if (s[i] == ')')
                cnt++;
            i++;
        } else
            if (s[i] == ')') {
                opened = false;
                i++;
            } else if (!(isspace(s[i]) || isalpha(s[i]))) {
                cnt++;
                opened = false;
            } else
                i++;
    if (opened)
        cnt++;

    printf("%d", cnt);
    return 0;
}
