#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str = " ";
        getline(cin, str);
        str += ' ';
        stack<char> stack;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ' ') {
                while (!stack.empty()) {
                    cout << stack.top();
                    stack.pop();
                }
                cout << str[i];
            }
            else stack.push(str[i]);
        }
    }
}


