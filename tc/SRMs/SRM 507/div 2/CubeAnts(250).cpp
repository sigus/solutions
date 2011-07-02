#include <vector>
using namespace std;

class CubeAnts {
public:
    int getMinimumSteps(vector <int> pos) {
        int m[8] = { 0, 1, 2, 1, 1, 2, 3, 2 };
        int mi = 0;
        for (int i = 0; i < pos.size(); i++)
            if (m[pos[i]] > m[mi])
                mi = pos[i];
        return m[mi];
    }
};
