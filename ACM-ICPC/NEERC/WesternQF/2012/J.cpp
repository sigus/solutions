#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int extr_date(const string& date) {
    stringstream ss;
    ss << date;
    int res;
    ss >> res;
    return res;
}

int date_to_auc(int n, const string& d) {
    if (*--d.end() == 'C')
        return 753 - n + 1;
    else
        return 753 + n;
}

int calcl(int n) {
    const int c[] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2 };
    int res = 0;    
    for (int i = 0; i < 4; i++) {
        res += c[n%10];
        n /= 10;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    int pos = s.find('-');
    string fd(s, 0, pos), sd(s, pos + 1);
    int d1 = extr_date(fd);
    int d2 = extr_date(sd);
    int auc1 = date_to_auc(d1, fd);
    int auc2 = date_to_auc(d2, sd);    
    int ans = 0;
    for (int i = auc1; i <= auc2; i++)
        ans = max(ans, calcl(i));
    cout << ans;
    return 0;
}

