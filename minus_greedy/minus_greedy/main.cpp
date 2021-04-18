#include <iostream>

using namespace std;

int main() {
    int n;
    int k;
    int cnt = 0;
    scanf("%d %d", &n, &k);
    while(n != 1) {
        if(n % k == 0) {
            cnt++;
            n /= k;
        }
        else{
            n -= 1;
            cnt++;
        }
    }
    cout << cnt << endl;
}
