#include <iostream>

using namespace std;

int main() {
    int c;
    cin >> c;
    int arr[10000001] = {0,};
    for(int i = 2; i <= c; i++) {
        arr[i] = arr[i-1] + 1;
        if(i % 2 == 0) {
            arr[i] = min(arr[i], arr[i/2]+1);
        }
        if(i % 3 == 0) {
            arr[i] = min(arr[i], arr[i/3] + 1);
        }
    }
    cout << arr[c];
}
