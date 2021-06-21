#include <iostream>
#include <stack>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    string s;
    while(1) {
        getline(cin, s);
        stack<char> st;
        if(s == ".")
            break;
        for(auto i : s) {
            if(!isalpha(i) && i != '.' && i != ' ') {
                if(st.empty()) {
                    st.push(i);
                } else {
                    if(st.top() == '(' && i == ')')
                        st.pop();
                    else if(st.top() == '[' && i == ']'){
                        st.pop();
                    }
                    else
                        st.push(i);
                }
            }
        }
        if(!st.empty()) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
}
