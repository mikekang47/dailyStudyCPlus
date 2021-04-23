#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = 0; j < numbers.size(); j++) {
            answer.push_back(numbers[j] + numbers[i]);
        }
    }
    sort(answer.begin(), answer.end());
    for(int i = 0; i < answer.size(); i++) {
        if(answer[i] == answer[i+1]) {
            answer.erase(answer.begin() + i+1);
        }
    }
    
    return answer;
}
