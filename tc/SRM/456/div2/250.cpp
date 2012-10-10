#include <cctype>
#include <string>
using namespace std;

class AppleWord {
public:
    int minRep(string word) {
        if (word.length() < 5)
            return -1;
        int ans = 0;
        if (toupper(word[0]) != 'A')
            ans++;
        if (toupper(word[word.length() - 2]) != 'L')
            ans++;
        if (toupper(word[word.length() - 1]) != 'E')
            ans++;
        for (int i = 1; i < word.length() - 2; i++)
            if (toupper(word[i]) != 'P')
                ans++;
        return ans;
    }
};

