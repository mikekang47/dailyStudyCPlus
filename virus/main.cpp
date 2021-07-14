#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
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
    for(int i = 0; i < pair; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    return 0;
}
