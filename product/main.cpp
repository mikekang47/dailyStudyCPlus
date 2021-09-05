#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > c) {
        a = a * a;
        b--;
    }
    int temp = a % c;
    while(b--) {
        temp = temp * temp;
        temp = temp % c;
    }
    cout << temp;
    return 0;
}
