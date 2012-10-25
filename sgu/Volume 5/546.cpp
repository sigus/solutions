#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b > n) {
        cout << -1;
        return 0;
    }
    string pass;
    cin >> pass;
    
    int ca = 0, cb = 0;
    for (int i = 0; i < pass.length(); i++)
        if (pass[i] == '0')
            ca++;
        else if (pass[i] == '1')
            cb++;        
            
    int nrepls = 0;
    if (ca <= a && cb <= b) {
        for (int i = 0; i < pass.length(); i++)
            if (ca < a && pass[i] == '2')
                pass[i] = '0', ca++, nrepls++;
            else if (cb < b && pass[i] == '2')
                pass[i] = '1', cb++, nrepls++;           
    } else if (ca > a && cb <= b) {
        for (int i = 0; i < pass.length(); i++)
            if (ca > a && cb < b && pass[i] == '0')
                pass[i] = '1', ca--, cb++, nrepls++;        
        for (int i = 0; i < pass.length(); i++)
            if (cb < b && pass[i] == '2')
                pass[i] = '1', cb++, nrepls++;
        for (int i = 0; i < pass.length(); i++)
            if (ca > a && pass[i] == '0')
                pass[i] = '2', ca--, nrepls++;
    } else if (ca <= a && cb > b) {
        for (int i = 0; i < pass.length(); i++)
            if (ca < a && cb > b && pass[i] == '1')
                pass[i] = '0', ca++, cb--, nrepls++;
        for (int i = 0; i < pass.length(); i++)
            if (cb > b && pass[i] == '1')
                pass[i] = '2', cb--, nrepls++;
        for (int i = 0; i < pass.length(); i++)
            if (ca < a && pass[i] == '2')
                pass[i] = '0', ca++, nrepls++;            
    } else if (ca > a && cb > b)
        for (int i = 0; i < pass.length(); i++)
            if (ca > a && pass[i] == '0')
                pass[i] = '2', ca--, nrepls++;
            else if (cb > b && pass[i] == '1')
                pass[i] = '2', cb--, nrepls++;        
    
    cout << nrepls << endl << pass;
    return 0;
}

