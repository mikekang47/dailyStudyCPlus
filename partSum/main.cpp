#include <iostream>
#include <vector>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[100001] = {0, };
    int temp[1000001] = {0,};
    temp[1] = arr[1];
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        temp[i] = arr[i];
        temp[i] += temp[i-1];
    }

    while(m--) {
        int i, j;
        cin >> i >> j;
        if(i != 1) {
            cout << temp[j] - temp[i-1] << "\n";
        } else {
            cout << temp[j]<< "\n";
        }
    }
    return 0;
}
