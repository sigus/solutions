#include <string> 
#include <cctype> 
#include <vector> 
#include <climits>
using namespace std; 

class MysteriousRestaurant { 
public: 
    int maxDays(vector <string> prices, int budget) { 
        vector< vector<int> > p(prices.size(), vector<int>(prices[0].size())); 
        for (int i = 0; i < prices.size(); i++)
            for (int j = 0; j < prices[i].length(); j++)
                if (isdigit(prices[i][j])) 
                    p[i][j] = prices[i][j] - '0';
                else if (isupper(prices[i][j])) 
                    p[i][j] = prices[i][j] - 'A' + 10; 
                else 
                    p[i][j] = prices[i][j] - 'a' + 36; 
        
        const int INF = INT_MAX;
        vector<int> days(7, 0);
        int ans = 0; 
        for (int i = 0; i < p.size(); i++) { 
            int opt = 0, opt_sum = INF; 
            for (int j = 0; j < p[i].size(); j++) {
                int k = i, sum = 0;
                while (k >= 0) { 
                    sum += p[k][j]; 
                    k -= 7; 
                } 
                if (sum < opt_sum) { 
                    opt = j; 
                    opt_sum = sum; 
                } 
            } 
            vector <int> ndays(days); 
            ndays[i%7] = opt_sum; 
            int chksum = 0; 
            for (int j = 0; j < 7; j++) 
                chksum += ndays[j]; 
            if (chksum <= budget) { 
                ans++; 
                days = ndays; 
            } else 
                break; 
        } 
        return ans; 
    } 
};
