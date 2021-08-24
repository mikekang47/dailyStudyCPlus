#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    for(int i = 0; i < languages.size(); i++) {
        for(int j = 0; j < table.size(); j++) {
            string temp = "";
            int sum = 0;
            int point = 6;
            for(int k = 0; k < table[j].size(); k++) {
                if(table[j][k] != ' ') {
                    temp += table[j][k];
                } else {
                    if(temp == languages[i]) {
                        sum += preference[i] * point;
                        point--;
                        temp ="";
                    } else {
                        point--;
                        temp = "";
                    }
                }
            }
            cout << sum << "\n";
        }
    }
    return answer;
}