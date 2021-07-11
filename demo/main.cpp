#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void dfs(vector<int> graph[], int start, vector<bool> visited) {
    stack<int> st;
    st.push(start);

    while(!st.empty()) {
        int v = st.top();
        if(visited[v]) {
            st.pop();
            continue;
        }
        if(!visited[v]) {
            visited[v] = true;
            cout << v << ' ';
        }
        for(int i = graph[v].size()-1; i >= 0; i--) {
            int next = graph[v][i];
            if(!visited[next])
                st.push(next);
        }

    } cout << "\n";
}

void bfs(vector<int> graph[], int start, vector<bool> visited) {
    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        int v = q.front();

        if(visited[v]) {
            q.pop();
            continue;
        } else {
            visited[v] = true;
            cout << v << ' ';
        } for(int i = 0; i < graph[v].size(); i++) {
            int next = graph[v][i];
            if(!visited[next])
                q.push(next);
        }
    }cout << "\n";
}

int main() {
    int n, m, v;
    cin >> n >> m >> v;
    vector<bool> dfs_visited(1001, false);
    vector<bool> bfs_visited(100, false);
    vector<int> graph[1001];

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a ,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 0; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(graph, v, dfs_visited);
    bfs(graph, v, bfs_visited);
}
