#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int m, n, x, y, i;
        cin >> m >> n >> x >> y;
        for(i = x; i <= lcm(m,n); i+= m) {
            int temp = (i%n ==0)? n: i % n;
            if(temp == y){
                cout << i << "\n";
                break;
            }
        }
        if(i > lcm(m,n))
            cout << -1 << "\n";
    }
    return 0;
}
