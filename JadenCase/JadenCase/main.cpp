#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
    string answer = "";
    for(int i = 0; i < s.length(); i++) {
        if(i == 0 && isalpha(s[i])) {
            answer += toupper(s[i]);
            continue;
        }
        else if(s[i-1] == ' '){
            answer += toupper(s[i]);
        } else {
            answer += tolower(s[i]);
        }
    }
    return answer;
}
