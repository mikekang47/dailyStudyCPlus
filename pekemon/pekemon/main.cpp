#include <iostream>
#include <string>
#include <map>
#include <ctype.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    map<string, int> monster;
    
    string *str = new string[n+1];
    
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        monster[s] = i;
        str[i] = s;
    }
    while(m--) {
        string st;
        cin >> st;
        if(isdigit(st[0]))
            cout << str[stoi(st)] << "\n";
        else
            cout << monster[st] << "\n";
    }
    
    
}
