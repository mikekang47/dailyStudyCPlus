#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<string> solution(string s) {
    vector<string> result;
    string s1 = "";
    string s2 = "";
    int start = 0;
    int end = (int)s.size()-1;
    s1 += s[start];
    s2 += s[end];
    while(start != end) {
        if(s1 == s2) {
            result.push_back(to_string(s[start]));
            start++;
            end++;
            s1 = "";
            s2 = "";
        } else {
            s1 += s[start];
            s2 += s[end];
            end++;
        }
    }
    if(s == s1 && s == s2) {
        result.push_back(s);
    }
    
    int size = result.size();
    for(int i = size-1; i >= 0; i++) {
        result.push_back(result[i]);
    }
    return result;
}

int main() {
    
}
