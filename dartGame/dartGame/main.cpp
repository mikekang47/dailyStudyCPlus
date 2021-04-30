#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    vector<int> v;
    for(int i = 0, s = 0; i < dartResult.size(); ++i) {
        if(dartResult[i] >= '0' && dartResult[i] <= '9')
            s = s * 10 + dartResult[i] - '0';
        else if(dartResult[i] == 'S') {
            v.push_back(s);
            s = 0;
        }
        else if(dartResult[i] == 'D') {
            v.push_back(s * s);
            s = 0;
        }
        else if(dartResult[i] == 'T') {
            v.push_back(s * s * s);
            s = 0;
        }
        else if(dartResult[i] == '*') {
            if(v.size() > 1) {
                v.back() *= 2;
                v[v.size() - 2] *= 2;
            }
            else v.back() *= 2;
        } else
            v.back() = -v.back();

    }
    int ans = 0;
    for(int i = 0; i < v.size(); ++i) ans += v[i];
    return ans;
}

int main() {
    cout << solution("1D2S#10S");
}
