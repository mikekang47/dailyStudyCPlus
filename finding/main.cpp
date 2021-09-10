#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

int main() {
    string t;
    string p;
    getline(cin, t);
    getline(cin, p);
    regex r(p);
    string temp = "";
    int cnt = 0;
    while(regex_search(t, r)) {
        t =  regex_replace(t,r,".");
        cnt++;
    }
    for(int i = 0; i < t.size(); i++) {
        if(t[i] == '.'){
           temp += to_string(i+1) + " ";
        }
    }
    cout << cnt << "\n";
    cout << temp;
    return 0;
}
