#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    int temp;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int cd = (int)v.front() * (int)v.back();
    cout << cd;

    return 0;
}
