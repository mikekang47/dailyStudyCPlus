#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int arr[311];
    int dp[311];
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    dp[0] = arr[0];
    dp[1] = max(arr[1], arr[0] + arr[1]);
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    for(int i = 3; i < t; i++) {
        dp[i] = max(dp[i-2] + arr[i], arr[i] + arr[i-1] + dp[i-3]);
    }
    cout << dp[t-1] << "\n";
    return 0;
}
