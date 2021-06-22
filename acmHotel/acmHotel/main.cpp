#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int h, w, n;
    while(t--) {
        scanf("%d %d %d", &h, &w, &n);
        int floar;
        int line;
        line = n/h + 1;
        if(n % h == 0) {
            floar = h;
            line = n/h;
        } else {
            floar = n % h;
        }
        printf("%d\n", floar*100 +line);
    }
}
