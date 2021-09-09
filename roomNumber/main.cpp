#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    cin >> n;
    vector<long long> arr(10, 0);
    for(auto i : n) {
       arr[(int)i-'0']++;
    }

    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        if(i != 9 && i != 6)
            cnt = max(cnt, (int)arr[i]);
    }

    cnt = max((int)(arr[6] + arr[9] + 1)/2, cnt);
    cout << cnt;

    return 0;
}
