#include <iostream>

using namespace std;

int n = 10;
int a[10] = {1, 8, 3, 5, 6, 2, 9, 4, 10, 7};


int main() {
    for(int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(a[j] < a[j-1]) {
                swap(a[j],a[j-1]);
            }
            else
                break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
