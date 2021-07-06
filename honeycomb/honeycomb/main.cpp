#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1;
    int b= 0;
    while(1){
        if(a >= n) {
            cout << b+1;
            break;
        }
        b++;
        a += b*6;
    }
}
