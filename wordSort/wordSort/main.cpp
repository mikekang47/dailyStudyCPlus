#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>


using namespace std;

bool cmp(string i, string j) {
    if(i.length() == j.length()) {
        return i < j;
    }
    return i.length()<j.length();
}


int main() {
    int a;
    cin >> a;
    vector<string> str;
    for(int i =0; i < a; ++i) {
        string value;
        cin >> value;
        str.push_back(value);
    }
    sort(str.begin(), str.end(), cmp);
    for(int i = 0; i < a; ++i) {
        if(str[i] == str[i+1]) {
            continue;
        }
        cout << str[i] << "\n";
    }
}
