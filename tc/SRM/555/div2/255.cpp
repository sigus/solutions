#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class XorBoardDivTwo {
public:
    int theMax(vector<string> board) {
        int ans = 0;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].length(); j++) {
                int sum = 0;
                for (int k = 0; k < board.size(); k++)
                    for (int l = 0; l < board[k].length(); l++)
                        sum += (board[k][l] - '0' + (k == i) + (l == j))%2;
                ans = max(ans, sum);
            }
        return ans;
    }
};

