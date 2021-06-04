#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

void dfs(vector<int> graph[], int start, bool check[]) {
    check[start] = true;
    cout << start << ' ';
    for (int i = 0; i < graph[start].size(); i++) {
        int next_node = graph[start][i];
        if (!check[next_node]) {
            dfs(graph, next_node, check);
        }
    }
}

int main() {
    vector<int> g[] = {{}, {2,3,8}, {1,7}, {1, 4, 5}, {3, 5}, {3,4}, {7}, {2, 6, 8}, {1, 7}};
    bool visited[9] = {false};
    dfs(g, 1, visited);
}
