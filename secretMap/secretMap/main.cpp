#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string tobinary(int a, int n) {
    string s = "";
    while(a != 0) {
        s += to_string(a % 2);
        a /= 2;
    }
    if(s.size() < n) {
        while(s.size() < n){
            s += '0';
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < n; i++) {
        string temp1 = tobinary(arr1[i], n);
        string temp2 = tobinary(arr2[i], n);
        cout << temp1 << ' ';
        cout << temp2 << ' ';
        string temp3 = "";
        for(int j = 0; j < temp1.size(); j++) {
            if(temp1[j] == '0' && temp2[j] == '0') {
                temp3 += ' ';
            } else {
                temp3 += '#';
            }
        }
        answer.push_back(temp3);
    }
    return answer;
}
