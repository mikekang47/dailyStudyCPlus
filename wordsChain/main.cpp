#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> done;
    int first = 0;
    int second = 0;

    for(int i = 0; i < words.size(); i++) {
        string before;
        string current = words[i];

        if(done.size() != 0) {
            before = done.back();
        }

        if(i % n == 0) {
            first++;
            second = 0;
        }
        second++;

        if(find(done.begin(), done.end(), words[i]) != done.end()) {
            break;
        } else if(before.back() != current.front() && done.size() != 0) {
            break;
        } else {
            done.push_back(words[i]);
        }
    }

    if(words.size() == done.size()) {
        return {0,0};
    }

    answer.push_back(second);
    answer.push_back(first);
    return answer;
}