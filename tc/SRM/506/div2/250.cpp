#include <vector>
#include <algorithm>
using namespace std;

class SlimeXSlimeRancher2 {
public:
    int train(vector<int> attributes) {
        sort(attributes.begin(), attributes.end());
        int s = 0;
        for (int i = 0; i < attributes.size(); i++)
            s += *--attributes.end() - attributes[i];
        return s;
    }
};

