#include <bits/stdc++.h>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();
    for(int i = 0; i < length - 4; i++) {
        answer.append("*");
    }
    for(int i = length-4; i < length; i++) {
        answer += phone_number[i];
    }
    return answer;
}

int main() {
    string phone_number = "01012345678";
    solution(phone_number);
    return 0;
}
