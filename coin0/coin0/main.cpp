#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> st;

int main() {
    int n, k, money;
    int coin = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> money;
        st.push(money);
    }
    while(k != 0) {
        if(k - st.top() >= 0) {
            k -= st.top();
            coin++;
        } else {
            st.pop();
        }

    }
    cout << coin;
}

