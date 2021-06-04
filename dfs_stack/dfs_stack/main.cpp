#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<int> graph[], int start, bool check[]) {
    stack<int> st;
    st.push(start);
   
    while(!st.empty()) {
        int cur = st.top();
        st.pop();
       
        if(check[cur]) continue;
        check[cur] = true;
        cout << cur << ' ';
        for(int i = graph[cur].size()-1; i >= 0; i--) {
            int next = graph[cur][i];
            if(!check[next]) {
                st.push(next);
            }
        }
    }
}

int main() {
    vector<int> g[] = {{}, {2,3,8}, {1,7}, {1, 4, 5}, {3, 5}, {3,4}, {7}, {2, 6, 8}, {1, 7}};
    bool visited[9] = {false};
    dfs(g, 1, visited);
}
