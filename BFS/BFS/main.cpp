#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<int> graph[], bool check[]) {
    queue<int> q;
    int start = graph[0][0];
    q.push(start);
    check[start] = true;
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        
        for(int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i];
            if(!check[next]) {
                q.push(next);
                check[next] = true;
            }
        }
    }
}

int main() {
    
    vector<int> g[] = {{1}, {2,3,8}, {1,7}, {1, 4, 5}, {3, 5}, {3,4}, {7}, {2, 6, 8}, {1, 7}};
    bool visited[9] = {false};
    bfs( g, visited);

}
