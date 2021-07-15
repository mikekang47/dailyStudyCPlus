#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int cnt = 0;

void bfs(vector<int> graph[], int start, bool visited[]) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int v = q.front();
        q.pop();
        if(!visited[v])
            visited[v] = true;
        for(int i = 0; i < (int)graph[v].size(); i++) {
            int next = graph[v][i];
            if(!visited[next]) {
                q.push(next);
                visited[next] = true;
                cnt++;
            }

        }
    }
}
int main() {
    int node, pair;
    cin >> node;
    cin >> pair;
    vector<int> graph[101];
    for(int i = 0; i < pair; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 0; i < node; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    bool visited[101] = {false, };

    bfs(graph, 1, visited);

    cout << cnt << "\n";
    return 0;
}
