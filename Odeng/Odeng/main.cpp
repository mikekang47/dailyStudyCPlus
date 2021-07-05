#include <iostream>
#include <vector>
#include <algorithm>

#include <stack>
using namespace std;

int cnt[1000001];
vector<int> v, ans;
stack<int> st;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    v.resize(n); ans.resize(n);
    for(int i = 0; i < n;i++) {
        cin >> v[i];
        cnt[v[i]]++;
    }
    cnt[0] = 1e9+7;
    
    st.push(0);
    for(int i = n-1; i >= 0; i--) {
        while(cnt[st.top()] <= cnt[v[i]])
            st.pop();
        if(cnt[st.top()] > 1e9)
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(v[i]);
    }
    for(auto i: ans)
        cout << i << " ";
}
