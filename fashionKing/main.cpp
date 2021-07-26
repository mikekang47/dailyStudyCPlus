#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        map<string, int> mp;
        cin >> n;
        while(n--) {
            string a, b;
            cin >> a >> b;
            if(mp[b])
                mp[b]++;
            else
                mp[b] = 1;
        }
        
        int ans = 1;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            ans *= it->second + 1;
        }
        ans -= 1;
        cout << ans << "\n";
    }
    return 0;
}
