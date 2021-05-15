#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a[100001];
    int n;
    int m;
    int temp;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    scanf("%d", &m);
    for(int i = 0; i < m; ++i) {
        scanf("%d", &temp);
        printf("%d\n", binary_search(a, a+n, temp));
    }
    
}
