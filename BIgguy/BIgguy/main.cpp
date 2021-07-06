#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> order(n, 0);
    vector<pair<int, int>> big;
    for(int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        big.push_back(make_pair(t1, t2));
    }
    
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if((big[i].first < big[j].first) && big[i].second < big[j].second) {
                    order[i]++;
                } else
                    continue;
            } else
                continue;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << order[i] + 1 << " ";
    }
    return 0;
}
