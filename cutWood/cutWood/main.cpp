#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int m;
vector<long long> tree(1000000);

bool possible(long long len) {
    long long cnt = 0;
    for(int i = 0; i < n; i++) {
        if(tree[i]-len > 0)
            cnt += tree[i] - len;
    }
    if(cnt >= m)
        return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
        
    for(int i = 0; i < n; i++) {
        cin >> tree[i];
    }
   
    long long result = 0;
    long long low = 1;
    long long high = *max_element(tree.begin(), tree.end());
    
    while(low <= high) {
        long long mid = (low + high) / 2;
        if(possible(mid)) {
            if(result < mid)
                result = mid;
            low = mid + 1;
        }
         else
             high = mid -1;
    }
    cout << result << "\n";
}
