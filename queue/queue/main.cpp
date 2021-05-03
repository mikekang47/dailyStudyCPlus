#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> q;


int main() {
    int num;
    int digit;
    cin >> num;
    for(int i = 0; i < num; i++) {
        string str;
        cin >> str;
        if(str == "push") {
            cin >> digit;
            q.push(digit);
        }
        else if(str == "front") {
            if(!q.empty())
                cout << q.front() << "\n";
            else
                cout << -1 << "\n";
        }
        else if(str == "back") {
            if(!q.empty())
                cout << q.back() << "\n";
            else
                cout << -1 << "\n";
        }
        else if(str == "empty") {
            if(!q.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
        }
        else if(str == "pop") {
            if(!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if(str == "size") {
            cout << q.size() << "\n";
        }
    }
    
}
