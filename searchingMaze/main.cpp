#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m;
vector<pair<int, int>> adj = {{-1, 0}, {0,1}, {1,0}, {0,-1}};
int graph[101][101];
bool visited[101][101] = {false, };

bool valid(int x, int y) {
    if(x >= 0 &&x< n && y >= 0 && y < m)
        return true;
    else
        return false;
}

int cnt[101][101];

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = true;

    while(!q.empty()) {
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        for (auto cord : adj) {
            int next_x = cur_x + cord.first;
            int next_y = cur_y + cord.second;

            if (valid(next_x, next_y) && graph[next_x][next_y] == 1) {
                if (!visited[next_x][next_y]) {
                    q.push(make_pair(next_x, next_y));
                    cnt[next_x][next_y] = cnt[cur_x][cur_y] + 1;
                    visited[next_x][next_y] = true;
                }
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++) {
            graph[i][j] = str[j]-'0';
        }
    }

    cnt[0][0] = 1;

    bfs( 0, 0);
    cout << cnt[n-1][m-1];
    return 0;
}
