#include <iostream>
#include <string>
#include <regex>
#include <iterator>

using namespace std;



int main() {
    int n, len;
    string S;
    int cnt = 0;
    int ans = 0;
    cin >> n;
    cin >> len;
    cin >> S;
    for(int i = 1; i < len-1; i++) {
        if(S[i-1] == 'I' && S[i] == 'O' && S[i+1] == 'I') {
            cnt++;
            if(cnt == n) {
                cnt -= 1;
                ans++;
            }
            i++;
        }
        else
            cnt = 0;
    }
    cout << ans;
    return 0;
}



