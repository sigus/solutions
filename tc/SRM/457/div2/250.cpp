#include <vector>
#include <string>
using namespace std;

class TheSquareDivTwo {
public:
    vector<string> solve(vector<string> board) {
        vector<int> R(board.size(), 0);
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].length(); j++)
                if (board[i][j] == 'C')
                    R[i]++;
        for (int i = 0; i < board[0].length(); i++)
            for (int j = 0; j < board.size(); j++)
                board[j][i] = j >= board.size() - R[i] ? 'C' : '.'; 
        return board;
    }
};

