#include <iostream>

using namespace std;

int n = 10;
int a[10] = {7, 5, 9, 0, 3, 6, 1, 2, 4, 8};

int main() {
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j <= n-1; j++) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
    
    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}
