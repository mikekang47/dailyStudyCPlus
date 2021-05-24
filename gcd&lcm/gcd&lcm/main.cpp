#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int a;
    int b;
    scanf("%d %d",&a, &b);
    printf("%d\n", gcd(a, b));
    printf("%d\n", lcm(a,b));
}
