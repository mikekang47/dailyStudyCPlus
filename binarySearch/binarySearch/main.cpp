#include <iostream>

using namespace std;

int a[] = {2, 5, 1, 3, 8, 6, 4, 7, 10, 9};
int n = 10;
int key = 5;

int main() {
    int lo = 0;
    int hi = 9;

    while(lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if(key == a[mid])
            printf("%d", mid);
        if(key < a[mid])
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return 0;
}
