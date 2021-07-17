#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    while(n--) {
        int num;
        cin >> num;

        if(num == 0){
            if(pq.empty()) {
                cout << 0 << "\n";
                continue;
            }
            cout << pq.top().second << "\n";
            pq.pop();
        }
        else {
            pq.push(make_pair(abs(num), num));
        }
    }
}