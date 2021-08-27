#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

bool checkPerfect(string p) {
    stack<char> st;
    for(auto i : p) {
        if(st.empty()) {
            st.push(i);
        } else {
            if(st.top() != i) {
                st.pop();
            } else {
                st.push(i);
            }
        }
    }
    if(st.empty()) {
        return true;
    } else {
        return false;
    }
}

pair<string, string> recursion(string p) {
    string u = "";
    string v = "";

    for(int i = 0; i < p.size(); i++) {
        if(u.size() < 2) {
            if(u.size() == 0)
                u += p[i];
            else if(u.back() != p[i]) {
                u += p[i];
            }
        } else {
            v += p[i];
        }
    }
    return make_pair(u,v);
}

string solution(string p) {

    if(p.size() == 0) {
        return "";
    }
    if(checkPerfect(p)) {
        return p;
    }

    string u = recursion(p).first;
    string v = recursion(p).second;

    if(checkPerfect(u)) {
        u += solution(v);
        return u;
    } else {
        string temp = "(";
        temp += solution(v);
        temp += ")";
        for(int i = 1; i < u.size()-1; i++) {
            if(u[i] == '(')
                temp += ')';
            else
                temp += '(';
        }
        return temp;
    }
}