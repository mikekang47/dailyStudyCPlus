#include <iostream>
#include <queue>
#include <string>

using namespace std;

queue<int> q;
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    int value;
    string s;
    for(long long  i = 0; i < n; i++){
        cin >> s;
        if(s == "pop") {
            if(q.empty()) {
                cout << -1 << "\n";;
            }
            else {
                cout << q.front() << "\n";;
                q.pop();
            }
        }
        else if(s == "push") {
            cin >> value;
            q.push(value);
        }
        else if(s == "size") {
            cout << q.size() << "\n";;
        }
        else if(s == "empty") {
            if(q.empty()) {
                cout << 1 << "\n";;
            }
            else {
                cout << 0 << "\n";;
            }
        }
        else if(s == "front") {
            if(q.empty()) {
                cout << -1 << "\n";;
            }
            else {
                cout << q.front() << "\n";;
            }
        }
        else if(s == "back") {
            if(q.empty()) {
                cout << -1 << "\n";;
            }
            else {
                cout << q.back() << "\n";;
            }
        }
    }
}
