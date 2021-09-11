#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int a) {
    for(int i = 2; i < pow(2,sqrt(a)+1); i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    while(t--) {
        int n;
        cin >> n;
        
    }
    return 0;
}
