#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <vector>

using namespace std;

bool cmp(int a, int b){
    return a >b;
}

vector<int> arr;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    
    for(int i = 0; i < s.size(); i++) {
        arr.push_back(s[i] - '0');
        sum += s[i] - '0';
    }
    
    sort(arr.begin(), arr.end(), cmp);
    if((sum % 3 != 0) || arr[s.size()-1] != 0) {
        cout << -1 << "\n";
        return 0;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
