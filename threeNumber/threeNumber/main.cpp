#include <iostream>

using namespace std;

int a[4] = {0};

int main() {
    
    cin >> a[0] >> a[1] >> a[2];
    for(int i = 0; i < 3; i++) {
        int min = i;
        for(int j = i+ 1; j < 3; j++) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
    printf("%d", a[1]);
}
