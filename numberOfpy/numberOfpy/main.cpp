#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int p = 0;
    int y = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') {
            p++;
        }
        else if(s[i] == 'Y' || s[i] == 'y') {
            y++;
        }
    }
    if(p == 0 && y == 0){
        return answer;
    }
    if(p != y) {
        answer = false;
    }
   
    return answer;
}
