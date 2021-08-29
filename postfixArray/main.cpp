#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    string temp= "";
    vector<string> a;
    for(int i = s.length() -1; i >= 0; i--) {
        temp = s[i] + temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for(auto i : a) {
        cout << i << "\n";
    }
    return 0;
}
