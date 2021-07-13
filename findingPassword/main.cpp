#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, string> arr;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    cin >> n >> m;
    string temp1, temp2;
    for(int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        arr[temp1] =  temp2;
    }

    for(int i = 0; i < m; i++) {
        cin >> temp1;

        cout << arr[temp1] << "\n";
    }
    return 0;
}
