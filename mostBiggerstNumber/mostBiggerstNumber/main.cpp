#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> arr;

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end());
    do {
        string s = "";
        for(int i = 0; i < numbers.size(); i++) {
            s += to_string(numbers[i]);
        }
        arr.push_back(stoi(s));
    } while(next_permutation(numbers.begin(), numbers.end()));
    answer += to_string(*max_element(arr.begin(), arr.end()));
    return answer;
}


