#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;
// L 이 들어오면 기존 스택에서 예비 스택으로 top을 옮김 ->기존스택이 empty인지 아닌지 검사
// D 가 들어오면 예비스택에서 기존스택으로 옮김 -> 예비 스택이 empty인지 아닌지 검사
// B 가 들어오면 기존 스택 pop; -> 기존 스택이 empty 이면 무시 -> 예비 스택은 그대로 있음
// P $ 가 들어오면 push 함.
//
//
// let arr = [1,2,3,4]ffgff
//
//
string str;
stack<char> st;
stack<char> temp;

int main() {
    cin >> str;
    int n;
    for(int i = 0; i < str.length(); i++) {
        st.push(str[i]);
    }
    cin >> n;
    while(n--) {
        char command;
        cin >> command;
        if(command == 'P') {
            char c;
            cin >> c;
            st.push(c);
        }
        else if(command == 'L') {
            if(st.empty())
                continue;
            else {
                temp.push(st.top());
                st.pop();
            }
        }
        else if(command == 'B') {
            if(st.empty()){
                continue;
            }
            else {
                st.pop();
            }
        }
        else if(command == 'D') {
            if(temp.empty()) continue;
            else {
                st.push(temp.top());
                temp.pop();
            }
        }
    }
    while(!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    
    while(!temp.empty()) {
        cout << temp.top();
        temp.pop();
    }

    
    return 0;
    
}
