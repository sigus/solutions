#include <vector>
#include <string>
using namespace std;
 
class SurroundingGameEasy {
public:
    int score(vector<string> cost, vector<string> benefit, vector<string> stone) {
        int tcost = 0, tbenefit = 0;
        for (int i = 0; i < stone.size(); i++)
            for (int j = 0; j < stone[i].length(); j++) {
                if (stone[i][j] == 'o')
                    tcost += cost[i][j] - '0';
                if (stone[i][j] == 'o' || (
                        (!i || stone[i - 1][j] == 'o') &&
                        (i + 1 >= stone.size() || stone[i + 1][j] == 'o') &&
                        (!j || stone[i][j - 1] == 'o') &&
                        (j + 1 >= stone[0].length() || stone[i][j + 1] == 'o')))
                    tbenefit += benefit[i][j] - '0';
            }
        return tbenefit - tcost;
    }
};

