#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    int M;
    vector<int> error;
    cin >> n;
    cin >> M;
    int cnt = 0;
    while(M--) {
        int temp;
        cin >> temp;
        error.push_back(temp);
    }
    if(stoi(n) == 100) {
        cout << "0";
        return 0;
    }
    
    return 0;
}
