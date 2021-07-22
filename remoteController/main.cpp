#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

/**
 * 문제 해결의 기본 아이디어는
 * 타겟 넘버에서 가장 가까운 숫자를 찾는 것.
 */
using namespace std;

bool visited[11] = {false, };


bool check(int now) {

    string s = to_string(now);
    for(int i = 0;i < s.length(); i++) {
        if(visited[s[i] - '0'])
            return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    while(m--) {
        int temp;
        cin >> temp;
        visited[temp] = true;
    }

    string s = to_string(n);

    int Min = abs(n-100);
    for(int i = 0; i <= 1000000; i++) {
        if(check(i)) {
            int tmp = abs(n-i) + to_string(i).length();
            Min = min(Min, tmp);
        }
    }
    cout << Min << "\n";

    return 0;
}
