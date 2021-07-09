#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

vector<double> v;
stack<double> st;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0 ; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '+') {
            double t1 = st.top();
            st.pop();
            double t2 = st.top();
            st.pop();
            st.push(t1 + t2);
        } else if(s[i] == '-') {
            double  t1 = st.top();
            st.pop();
            double  t2 = st.top();
            st.pop();
            st.push(t2 - t1);
            
        } else if(s[i] == '*') {
            double  t1 = st.top();
            st.pop();
            double  t2 = st.top();
            st.pop();
            st.push(t1 * t2);
            
        } else if(s[i] == '/') {
            double  t1 = st.top();
            st.pop();
            double  t2 = st.top();
            st.pop();
            st.push(t2 / t1);
        } else {
            st.push(v[s[i]-'A']);
            
        }
    }
    printf("%.2lf", st.top());
}
