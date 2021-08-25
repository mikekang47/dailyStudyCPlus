#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;


string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    priority_queue<pair<int, string>> pq;
    for(int i = 0; i < table.size(); i++) {
        string temp = "";
        int point = 6;
        int sum = 0;
        string key;
        for(int j = 0; j < table[i].size(); j++) {
            if(table[i][j] != ' ')
                temp += table[i][j];
            else if(temp == "SI" || temp == "CONTENTS" || temp == "HARDWARE" || temp == "PORTAL" || temp == "GAME") {
                key = temp;
            }
            if(j == table[i].size()-1 || table[i][j] == ' ') {
                for(int k = 0; k < languages.size(); k++) {
                    if(temp == languages[k]) {
                        sum += preference[k] * point;
                    }
                }
                temp = "";
                point--;
            }
        }
        if(!pq.empty() && pq.top().first == sum) {
            string s = pq.top().second;
            if(s[0] > key[0]) {
                pq.pop();
                pq.push(make_pair(sum, key));
            }
        } else {
            pq.push(make_pair(sum, key));
        }

    }
    return pq.top().second;

}

int main() {
    vector<string> table = {"SI JAVA JAVASCRIPT SQL PYTHON C#", "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++", "HARDWARE C C++ PYTHON JAVA JAVASCRIPT", "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP", "GAME C++ C# JAVASCRIPT C JAVA"};
    vector<string> languages = {"PYTHON", "C++", "SQL"};
    vector<int> preference = {7, 5, 5};
    cout << solution(table, languages, preference);
}