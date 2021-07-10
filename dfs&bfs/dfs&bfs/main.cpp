#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, v;
vector<bool> visited(1001, false);
vector<vector<int>> graph = {{}, {2,3,8}, {1,7}, {1, 4, 5}, {3, 5}, {3,4}, {7}, {2, 6, 8}, {1, 7}};

void dfs(int s) {
    visited[s] = true;
    cout << s << ' ';
    for(int i = 0; i < graph[s].size(); i++) {
        int next = graph[s][i];
        if(!visited[next]) {
            dfs(next);
        }
    }
 
}

int main() {

    dfs(1);
    
}
