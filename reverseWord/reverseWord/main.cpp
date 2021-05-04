#include <iostream>
#include <string>
#include <stack>
#include <queue>


using namespace std;

stack<char> st;
queue<char> q;

int main() {
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '<') {
            while(!(s[i] != '>')) {
                q.push(s[i]);
                cout << q.back();
                i++;
            }
        }
        else {
            st.push(s[i]);
            cout << st.top();
        }
    }
    
    
    
    
    
}
