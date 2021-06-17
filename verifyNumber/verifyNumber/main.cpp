#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        sum += value * value;
    }
    cout << sum % 10;
    
}
