#include <iostream>
using namespace std;

int main() {
    long long  arr[1000] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n <= 10) {
            cout << arr[n] << "\n";
        } else {
            for(int i = 11; i <= n; i++) {
                arr[i] = arr[i - 1] + arr[i - 5];
            }
            cout << arr[n] << "\n";
        }

    }
    return 0;
}
