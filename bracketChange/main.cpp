#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

bool checkBalance(string p) {
    if(p.size() == 0) {
        return false;
    }
    int left = 0;
    int right = 0;
    for(auto i: p) {
        if(i == '(') {
            left++;
        } else {
            right++;
        }
    }
    if(left == right) {
        return true;
    } else {
        return false;
    }
}

bool checkPerfect(string p) {
    stack<char> st;
    for(auto i : p) {
        if(st.empty()) {
            st.push(i);
        } else {
            if(st.top() == '(' && st.top() != i) {
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
        if(checkBalance(u)) {
            v += p[i];
        } else {
            u += p[i];
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