#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    string temp = "";
    while(1) {
        getline(cin, s);
        if(s == "0") {
            break;
        }
        temp = s;
        reverse(s.begin(), s.end());
        if(s == temp) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}
