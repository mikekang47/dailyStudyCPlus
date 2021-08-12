#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>


using namespace std;
vector<int> graph[101];

/**
 * 타겠까지 총 몇 개의이 노드를 거쳐가는지.
 * 노드를 거쳐갈때 마다 비용 1 증가
 * 타겟에 도달하면 비용을 sum에 합산.
 * {3, 4}, {3}, {1, 2, 4}, {1, 3, 5}, {4}
 *
 */
vector<int> kevin(101,0);

void bfs(int start, bool visited[]) {
    int sum = 0;
    queue<int> q;
    q.push(start);
    int cost = 1;
    visited[start] = true;

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(int next : graph[v]) {
            if(!visited[next]) {
                q.push(next);
                visited[next] = true;
                sum += cost;
            }
        }
    }
    cout << sum;
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        sort(graph[a].begin(), graph[a].end());
        sort(graph[b].begin(), graph[b].end());
    }

    for(int i = 1; i <= m; i++) {
        bool visited[101] = {false,};
        bfs(i, visited);
    }

    return 0;
}
