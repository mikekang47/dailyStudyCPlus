#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    int t = 0;
    int y = (int)pow(2,n)/2;
    int x = y;

    while(n--) {
        int temp = (int)pow(2,n) /2;
        int skip = (int)pow(4,n);

        if(r < y && c < x) {
            x -= temp;
            y -= temp;
        } else if(r < y && x <= c) {
            x += temp;
            y -= temp;
            t += skip;
        } else if(y <= r && c < x) {
            x -= temp;
            y += temp;
            t += skip * 2;
        } else {
            x += temp;
            y += temp;
            t += skip * 3;
        }
    }
    cout << t << "\n";
}