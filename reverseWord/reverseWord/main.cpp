#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <stack>

using namespace std;

//먼저 공백이 있을때
//공백이 있을때는 단어별로 출력한다.

string s;
queue<char> q;
stack<char> st;

int main() {
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        q.push(s[i]);
    }
    while(!q.empty()) {
        if(q.front() == ' ') {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
        st.push(q.front());
        q.pop();
    }
}
