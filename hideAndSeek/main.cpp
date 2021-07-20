#include <iostream>
#include <queue>

using namespace std;

int cnt = 0;
bool visited[100001] = {false, };

void bfs(int start, int k) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int size = q.size();
        for(int i = 0; i < size; i++) {
            int num = q.front();
            q.pop();
            if(num == k)
                return;
            if(visited[num+1] == false && num + 1 >= 0 && num +1 <= 100000) {
                visited[num+1] = true;
                q.push(num+1);
            }
            if(visited[num-1] == false && num - 1 >= 0 && num - 1 <= 100000) {
                visited[num-1] = true;
                q.push(num-1);
            }
            if(visited[num*2] == false && num*2 >= 0 && num*2 <= 100000) {
                visited[num*2] = true;
                q.push(num*2);
            }
        }
        cnt++;
    }
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    bfs(n, k);
    cout << cnt << "\n";
    return 0;
}
