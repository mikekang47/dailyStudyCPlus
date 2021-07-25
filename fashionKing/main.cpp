#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        unordered_map<string, string> mp;
        cin >> n;
        while(n--) {
            string a, b;
            cin >> a >> b;
            mp.insert(make_pair(b,a));
        }

    }
    return 0;
}
