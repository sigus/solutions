#include <map>
#include <string>
using namespace std;

class ChocolateBar {
    int chk(string s, int l, int r) {
        map<char, int> m;
        for (int i = l; i <= r; i++)
            if (++m[s[i]] > 1)
                return 0;
        return 1;
    }
public:
    int maxLength(string letters) {
        int m = 0;
        for (int i = 0; i < letters.size(); i++)
            for (int j = i; j < letters.size(); j++)
                if (chk(letters, i, j))
                    if (j - i + 1 > m)
                        m = j - i + 1;
        return m;
    }
};

