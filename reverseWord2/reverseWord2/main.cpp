#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;
 
int main()
{
    string str;
    getline(cin, str);
    str += '\n';
    stack<char> st;
    bool check = false;
    for (int i = 0; i < str.size(); i++) {
        if(str[i] == '<') {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << '<';
            check = true;
        }
        else if(str[i] == '>') {
            cout << '>';
            check = false;
        }
        else if(check) {
            cout << str[i];
        }
        else if(str[i] == ' '|| str[i] == '\n') {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
        else {
            st.push(str[i]);
        }
       
    }
    return 0;
}
