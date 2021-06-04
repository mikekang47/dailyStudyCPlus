#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void bfs(int start, vector<int> graph[], bool check[]) {
    queue<int> q;
    q.push(start);
    check[start] = true;
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        
        for(int i = 0; i < graph[cur].size(); i++) {
            int next_node = graph[cur][i];
            if(!check[next_node]) {
                q.push(next_node);
                check[next_node] = true;
            }
        }
    }
}

int main() {
    vector<int> g[] = {{}, {2,3,8}, {1,7}, {1, 4, 5}, {3, 5}, {3,4}, {7}, {2, 6, 8}, {1, 7}};
    bool visited[9] = {false};
    bfs(1, g, visited);
}
