#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> temp(arr);
    sort(temp.begin(), temp.end());

    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    for(int i = 0; i < n; i++) {
        auto it = lower_bound(temp.begin(), temp.end(),arr[i]);

        cout << it - temp.begin() <<  ' ';
    }
    return 0;
}