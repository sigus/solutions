#include <vector>
using namespace std;

class GreatFairyWar {
public:
    int minHP(vector<int> dps, vector<int> hp) {
        int ans = 0;
        for (int i = 0, t = 0; i < hp.size(); i++)
            ans += dps[i]*(t += hp[i]);
        return ans;
    }
};

