#include <iostream>
#include <set>
#include <string>

using namespace std;

set<int> myset;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        int temp;
        cin >> s;
        if(s == "add") {
            cin >> temp;
            if(myset.find(temp) != myset.end())
                continue;
            else
                myset.insert(temp);
        } else if(s == "remove") {
            cin >> temp;
            if(myset.find(temp) != myset.end())
                myset.erase(temp);
            else
                continue;
        } else if(s == "check") {
            cin >>temp;
            if(myset.find(temp) != myset.end())
                cout << "1\n";
            else
                cout <<"0\n";
        } else if(s == "toggle") {
            cin >> temp;
            if(myset.find(temp) != myset.end())
                myset.erase(temp);
            else
                myset.insert(temp);
        } else if(s == "all") {
            myset.clear();
            myset = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        } else if(s == "empty") {
            myset.clear();
        }
    }
}
