#include <cctype>
#include <string> 
using namespace std; 

class SentenceCapitalizerInator { 
public: 
    string fixCaps(string paragraph) { 
        bool new_s = true; 
        for (int i = 0; i < paragraph.length(); i++) 
            if (new_s && paragraph[i] != ' ') {
                paragraph[i] = toupper(paragraph[i]);
                new_s = false;
            } else if (paragraph[i] == '.')  
                new_s = true; 
        return paragraph; 
    } 
};
