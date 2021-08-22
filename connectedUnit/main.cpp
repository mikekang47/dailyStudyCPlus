#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[1001];

int cnt = 0;

void bfs(int start, bool visited[]) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(int i = 0; i < graph[v].size(); i++) {
            int next = graph[v][i];
            if(!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
    cnt++;
}

int main() {
    int n, m;
    cin >> n >> m;
    bool visited[1001] = {false, };
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(1, visited);
    for(int i = 2; i <= n; i++) {
        if(!visited[i]) {
            bfs(i, visited);
        }
    }
    cout << cnt;
    return 0;
}
