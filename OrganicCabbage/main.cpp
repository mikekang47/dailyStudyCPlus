#include <iostream>
#include <vector>
#include <memory.h>

using namespace  std;

vector<pair<int, int>> adj = {{-1, 0}, {0,1}, {1,0}, {0,-1}};
int m, n, k;

bool farm[51][51] = {0, };
bool visited[51][51] = {0, };

bool valid(int x,int y) {
    if(x >= 0 && x < m && y>= 0 && y < n)
        return true;
    else
        return false;
}


void dfs(int x, int y) {
    visited[x][y] = true;
    for(auto cord : adj) {
        int adjx = x + cord.first;
        int adjy = y + cord.second;
        if(valid(adjx, adjy)) {
            if(!visited[adjx][adjy] && farm[adjx][adjy] == 1) {
                dfs(adjx, adjy);
            } else
                visited[adjx][adjy] = true;
        }
    }

}

int solution() {
    int ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(!visited[i][j] && farm[i][j] == 1) {
                ans++;
                dfs(i,j);
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> m >> n >> k;
        memset(farm, false, sizeof(farm));
        memset(visited, false, sizeof(visited));
        while(k--) {
            int x, y;
            cin >> x >> y;
            farm[x][y] = 1;
        }
        cout << solution() << "\n";
    }
    return 0;
}
