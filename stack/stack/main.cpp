#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
//
//14
//push 1
//push 2
//top => 2
//size =>2
//empty => 거짓 => 0
//pop => 맨위 => 2
//pop => 맨위 => 1
//pop => 없으니까 => -1
//size => 없으니까 = 0
//empty => 비었으니까 => 1
//pop => 없으니까 => -1
//push 3
//empty => 있으니까 => 0
//top -> 3

stack<int> arr;

int main() {
    int op;
    int value;
    cin >> op;
    string s;
    for(int i = 0; i < op; i++) {
        cin >> s;
        if(s == "push") {
            cin >> value;
            arr.push(value);
        }
        else if(s == "top") {
            if(arr.empty()) {
                cout << "-1" << "\n";
            }
            else {
                cout << arr.top() << "\n";
            }
        }
        else if(s == "size") {
            cout << arr.size() << "\n";
        }
        else if(s == "empty") {
            cout << arr.empty() << "\n";
        }
        else if(s == "pop") {
            if(!arr.empty()) {
                cout << arr.top() << "\n";
                arr.pop();
            }
            else {
                cout << "-1" << "\n";
            }
        }
    }
    return 0;
}
