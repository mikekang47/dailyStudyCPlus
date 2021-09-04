#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    stack<char> st;

    for (auto i : s) {
        if (isalpha(i)) {
            cout << i;
        }
        else {
            if (i == '(')
                st.push(i);
            else if (i == '*' || i == '/') {
                while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
                    cout << st.top();
                    st.pop();
                }
                st.push(i);
            }
            else if (i == '+' || i == '-') {
                while (!st.empty() && st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(i);
            }
            else if (i == ')') {
                while (!st.empty() && st.top() != '(') {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }



    return 0;
}
