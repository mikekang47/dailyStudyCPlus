#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string tobinary(int n) {
    string s = "";
    while(n != 0) {
        s += to_string(n % 2);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int solution(int n) {
    int answer = 0;
    string str = tobinary(n);
    int original = count(str.begin(), str.end(), '1');
    while(1) {
        string s = tobinary(n+1);
        int c = count(s.begin(), s.end(), '1');
        if(original == c) {
            return n+1;
        }
        n++;
    }
    return answer;
}
