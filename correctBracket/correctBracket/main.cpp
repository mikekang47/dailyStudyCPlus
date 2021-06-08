#include<string>
#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

bool solution(string s)
{
    bool answer = true;
    for(auto i : s) {
        if(st.empty()) {
            st.push(i);
        }
        else {
            if(st.top() == '(' && i == ')') {
                st.pop();
            } else {
                st.push(i);
            }
        }
    }
    if(st.empty()) {
        answer = true;
    } else {
        answer = false;
    }

    return answer;
}
