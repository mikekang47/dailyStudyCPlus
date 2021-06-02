#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

stack<int> temp;
vector<int> arr;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = 0; j < numbers.size(); j++) {
            if(i == j) {
                continue;
            }
            arr.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        if(temp.empty()) {
             temp.push(arr[i]);
        } else {
            if(temp.top() == arr[i]) {
                continue;
            } else {
                temp.push(arr[i]);
            }
        }
    }
    while(!temp.empty()) {
        answer.push_back(temp.top());
        temp.pop();
    }
    sort(answer.begin(), answer.end());
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i];
    }
     return answer;
}

int main() {
    solution({2,1,3,4,1});
}
