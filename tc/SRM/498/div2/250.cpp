#include <vector>
#include <algorithm>
using namespace std;

class AdditionGame { 
public: 
    int getMaximumPoints(int A, int B, int C, int N) { 
        vector<int> v;
        v.push_back(A);
        v.push_back(B);
        v.push_back(C);
        int s = 0;
        while (N--) {
            sort(v.begin(), v.end());
            if (*--v.end())
                s += (*--v.end())--;
        }
        return s;
    }
};

