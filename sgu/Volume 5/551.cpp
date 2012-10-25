#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, t_1, t_2;
    cin >> n >> t_1 >> t_2;
    int i = 0, c_1 = 0;
    for (; ; i += t_1, c_1++)
        if (i/t_1 + i/t_2 >= n)
            break;
    int j = 0, c_2 = 0;
    for (; ; j += t_2, c_2++)
        if (j/t_1 + j/t_2 >= n)
            break;
    cout << c_1 + c_2 << ' ' << max(i, j);
    return 0;
}

