#include <iostream>

using namespace std;

int factorial(int a) {
    if(a <= 1){
        return a;
    }
    return a * factorial(a-1);
}

int main() {
    int n, k;
    cin >> n >> k;
    if(k == 0 || n-k == 0) {
        cout << 1;
        return 0;
    }
    cout << factorial(n) / (factorial(k) * factorial(n-k));
    
}
