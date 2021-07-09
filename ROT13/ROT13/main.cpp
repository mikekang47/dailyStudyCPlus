#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ' || isdigit(s[i]))
            continue;
        if(isupper(s[i]) && s[i] + 13 > 'Z') {
            s[i] = s[i] + 13 - 26;
        } else if(islower(s[i]) && s[i] + 13 > 'z') {
            s[i] = s[i] + 13 -  26;
        } else {
            s[i] = s[i] + 13;
        }
    }
    cout << s;
}
