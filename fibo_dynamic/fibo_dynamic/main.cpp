#include <iostream>

using namespace std;

long long d[100];

int main() {
    d[1] = 1;
    d[2] = 1;
    int n;
    cout << "숫자를 입력하시오 : ";
    scanf("%d", &n);
    
    for(int i = 3; i <= n; i++) {
        d[i] = d[i-1] + d[i-2];
    }
    
    cout << d[n] << '\n';
    return 0;
}
