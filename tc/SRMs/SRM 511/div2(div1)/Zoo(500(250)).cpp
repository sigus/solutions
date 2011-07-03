#include <vector> 
#include <algorithm> 
using namespace std; 

class Zoo { 
public: 
    long long theCount(vector <int> answers) { 
        sort(answers.begin(), answers.end()); 
        if (answers[0]) 
            return 0; 
        int ans = 1, cnt = 1, old_cnt = 2;  
        for (int i = 1; i < answers.size(); i++) { 
            if (answers[i - 1] == answers[i]) { 
                cnt++; 
                if (cnt > 2 || cnt > old_cnt) 
                    return 0; 
            } else { 
                if (answers[i] - answers[i - 1] != 1) 
                    return 0; 
                if (cnt == 2) 
                    ans *= 2; 
                old_cnt = cnt; 
                cnt = 1; 
            } 
        } 
        ans *= 2; 
        return ans; 
    } 
};
