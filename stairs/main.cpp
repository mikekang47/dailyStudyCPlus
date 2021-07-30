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
    for(int i = 0; i <= t-2; i++) {
        dp[i+2] = max(dp[i+1], dp[i] + arr[i+1]);
    }
    cout << dp[t] << "\n";
    return 0;
}
