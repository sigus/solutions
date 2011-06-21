#include <iostream>
#include <string> 
#include <list>
using namespace std;

int main() {
    string x;
    cin >> x;
    list<int> l;
    for (int i = 0; i < x.size(); i++)
        l.push_back(x[i] - '0');

    int ans = 0;
    while (l.size() != 1 || l.front() != 1) {
        ans++;
        if (!l.back())
            l.pop_back();
        else {
            list<int>::iterator i = l.end();
            i--;
            while (*i == 1) {
                *i = 0;
                if (i == l.begin())
                    break;
                i--;
            }
            if (i == l.begin())
                l.push_front(1);
            else
                *i = 1;
        }    
    }

    cout << ans;
    return 0;
}
