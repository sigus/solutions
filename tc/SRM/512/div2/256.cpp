#include <algorithm>
#include <vector>
using namespace std;

class MarbleDecoration {
public:
    int maxLength(int R, int G, int B) {
        vector<int> v;
        v.push_back(R);
        v.push_back(G);
        v.push_back(B);
        sort(v.begin(), v.end());
        if (v[2] - v[1] > 0)
            return v[1]*2 + 1;
        else
            return v[1]*2;
    }
};

