#include <string> 
using namespace std; 

class GameOfLifeDivTwo { 
public: 
    string theSimulation(string init, int T) { 
        string s(init); 
        while (T--) { 
            for (int i = 0; i < init.length(); i++) 
                if (init[(i > 0 ? i : init.length()) - 1] + init[i] + init[(i + 1)%init.length()] - 3*'0' >= 2) 
                    s[i] = '1'; 
                else 
                    s[i] = '0'; 

            init = s; 
        } 
        return init; 
    } 
};
