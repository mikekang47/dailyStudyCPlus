#include <queue>
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> hear;
    vector<string> see;
    while(n--) {
        string s;
        cin >> s;
        hear.push_back(s);
    }
    while(m--) {
        string s;
        cin >> s;
        see.push_back(s);
    }
    int cnt = 0;
    set<string> myset;
    sort(hear.begin(), hear.end());
    sort(see.begin(), see.end());
    for(int i = 0; i< hear.size(); i++) {
        if(binary_search(see.begin(), see.end(), hear[i])) {
            myset.insert(hear[i]);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for(auto it = myset.begin(); it != myset.end(); it++) {
        cout << *it << '\n';
    }
    
}
