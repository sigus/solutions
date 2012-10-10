#include <vector>
#include <algorithm>
using namespace std;

class TheJackpotDivTwo {
public:
    vector<int> find(vector<int> money, int jackpot) {
        while (jackpot--) {
            int m = 0;
            for (int i = 1; i < money.size(); i++)
                if (money[i] < money[m])
                    m = i;
            money[m]++;
        }
        sort(money.begin(), money.end());
        return money;
    }
};

