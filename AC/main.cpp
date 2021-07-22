#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <ctype.h>


using namespace std;

int main() {
    int t;
    int num;
    string command;
    string x;
    cin >> t;
    while(t--) {
        bool flag = false;
        deque<int> arr;
        cin >> command;
        cin >> num;
        cin >> x;

        int temp = 0;

        remove(x.begin(), x.end(), '[');

        for(int i = 0; i < x.size(); i++) {
            if(isdigit(x[i])) {
                temp = temp*10 + x[i] - '0';
            } else {
                if(temp != 0){
                    arr.push_back(temp);
                    temp = 0;
                }
            }
        }

        bool rFlag = false;

        for(auto i : command) {
            if (i == 'R') {
                rFlag = !rFlag;
            } else if (i == 'D') {
                if (!rFlag) {
                    if (arr.empty()) {
                        cout << "error\n";
                        flag = true;
                        break;
                    } else {
                        arr.pop_front();
                    }
                } else
                if (arr.empty()) {
                    cout << "error\n";
                    flag = true;
                    break;
                } else {
                    arr.pop_back();
                }
            }
        }

        if(flag)
            continue;
        cout << "[";
            if(!rFlag) {
                for(int i = 0; i < arr.size(); i++) {
                    cout << arr[i];
                    if(i != arr.size()-1)
                        cout<< ',';
                }
            } else {
                for(int i = arr.size()-1; i >= 0;i--) {
                    cout << arr[i];
                    if(i != 0)
                        cout<< ',';
                }
            }
        cout << "]\n";

    }
    return 0;
}
