#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void dfs(vector<int> tree, bool check[]) {
    stack<int> st;
    int start = tree[0];
    st.push(start);
    
    while(!st.empty()) {
        int cur = st.top();
        st.pop();
        int curIdx = (int)(find(tree.begin(), tree.end(), cur) - tree.begin());
        if(!check[cur]) {
            check[cur] = true;
            cout << cur << ' ';
        }
        
        int rightIdx = curIdx * 2 + 2;
        int leftIdx = curIdx * 2 + 1;
        
        if(rightIdx < tree.size()) {
            int right = tree[rightIdx];
            if(right) {
                st.push(right);
            }
        }
        
        if(leftIdx < tree.size()) {
            int left = tree[leftIdx];
            if(left) {
                st.push(left);
            }
        }
    }
}

int main() {
    vector<int> g = {10,4,9,3,1,2,7,5,6};
    bool visit[9] = {false};
    dfs(g, visit);
}
