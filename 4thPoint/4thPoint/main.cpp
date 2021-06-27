#include <iostream>
using namespace std;

int main() {
    int x[1001] = {0,};
    int y[1001] = {0, };
    for(int i = 0; i < 3; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        x[a]++;y[b]++;
    }
    int p = 0, k = 0;;
    for(int i = 0; i < 1001; i++) {
        if(x[i] != 0 && x[i] != 2) {
            p = i;
        }
        if(y[i] != 0 && y[i] != 2) {
            k = i;
        }
    }
    cout << p << ' ' << k;
    
}
