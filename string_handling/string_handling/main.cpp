#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

map<string, int> mp;

string solution(vector<string> param0) {
    string answer = "";
    mp["BOOL"] = 1;
    mp["SHORT"] = 2;
    mp["FLOAT"] = 4;
    mp["LONG"] = 16;
    for(auto i : param0) {
        if(i == "LONG") {
            while(answer.length() % 8 != 0) {
                answer += ".";
            }
        } else {
            while(answer.length() % mp[i] != 0) {
                answer += ".";
            }
        }
        for(int j = 0; j < mp[i]; j++) {
            answer += "#";
        }
    }
    while(answer.size() % 8 != 0) {
        answer += ".";
    }
    if(answer.length() > 128) {
        return "HALT";
    }
    return answer;
}

vector<string> v ={"BOOL", "SHORT", "BOOL", "LONG"};

int main() {
    cout << solution(v);
}

