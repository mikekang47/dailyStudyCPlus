#include <iostream>
#include <deque>
#include <string>

using namespace std;

deque<int> dq;

int main() {
    int num;
    int value;
    cin >> num;
    for(int i = 0; i < num; i++) {
        string str;
        cin >> str;
        if(str == "push_back") {
            cin >> value;
            dq.push_back(value);
        }
        else if(str == "push_front") {
            cin >> value;
            dq.push_front(value);
        }
        else if(str == "front") {
            if(dq.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << dq.front() << "\n";
            }
        }
        else if(str == "pop_front") {
            if(dq.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(str == "pop_back") {
            if(dq.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(str == "size") {
            cout << dq.size() << "\n";
        }
        else if(str == "empty") {
            dq.empty() ? cout << 1 : cout << 0;
            cout << "\n";
        }
        else if(str == "back") {
            dq.empty() ? cout << -1 : cout << dq.back();
            cout << "\n";
        }
    }
}
