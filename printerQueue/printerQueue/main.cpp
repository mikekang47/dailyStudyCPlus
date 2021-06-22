#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int answer = 0;
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        answer = 0;
        int n;
        int location;
        int importance;
        scanf("%d %d", &n, &location);

        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        for(int j = 0; j < n; j++) {
            scanf("%d", &importance);
            q.push({j, importance});
            pq.push(importance);
        }
        
        while(!q.empty()) {
            int k = q.front().first;
            int p = q.front().second;
            q.pop();
            
            if(p == pq.top()) {
                pq.pop();
                answer++;
                if(k == location) {
                    cout << answer << endl;
                    break;
                }
            } else {
                q.push(make_pair(k, p));
            }
        }
    }
}
