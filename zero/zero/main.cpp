#include <iostream>
#include <stack>
#include <numeric>
#include <vector>

using namespace std;

stack<int> st;
vector<int> v;

/**
 input : 첫 번째 줄에 정수 k, 이후 k개의 줄까지 정수 입력
 입력이 0일 경우 st.top()을 제거.
 output : 스택 원소 합 출력.
 */

int main() {
    int k;
    cin >> k;
    for(int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        if(n == 0) {
            v.pop_back();
        }
        else {
            v.push_back(n);
        }
    }
    printf("%d", accumulate(v.begin(),v.end(), 0));
}
