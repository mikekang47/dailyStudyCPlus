#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int num, data;
    stack<int> s;
    vector<int> input;
    vector<char> output;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> data;
        input.push_back(data);
    }

    int idx = 0;
    for (int i = 1; i <= num; i++) {
        s.push(i);
        output.push_back('+');
        
        while (!s.empty()) {
            if (input[idx] == s.top()) {
                s.pop();
                output.push_back('-');
                idx++;
            }
            else break;
        }
    }

    if (s.empty()) {
        for (int i = 0; i < output.size(); i++) {
            cout << output[i] << "\n";
        }
    }
    else cout << "NO" << "\n";

    return 0;
}
