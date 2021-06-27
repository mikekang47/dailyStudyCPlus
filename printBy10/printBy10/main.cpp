#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0];
    for(int i = 1; i < s.size(); i++) {
        if((i) % 10 == 0) {
            cout << "\n";
        }
        cout << s[i];
    }
}
