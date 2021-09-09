#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    cin >> n;
    vector<long long > arr(10, 0);
    for(auto i : n) {
       arr[i-'0']++;
    }

    if((arr[9] + arr[6]) % 2 == 0) {
        arr[9]  =(arr[9] + arr[6]) / 2;
        arr[6]  =(arr[9] + arr[6]) / 2;
        cout << *max_element(arr.begin(), arr.end());
    } else {
        arr[9] = (arr[9] + arr[6]) / 2 + 1;
        arr[6] = (arr[9] + arr[6]) / 2;
        cout << *max_element(arr.begin(), arr.end());
    }

    return 0;
}
