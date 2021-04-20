#include <iostream>
#include <vector>

using namespace std;

int target[10] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8};
int n = 10;

int partition(int *a, int left, int right) {
    int p = a[left];
    int i = left  +1;
    for(int j = left + 1; j <= right; j++) {
        if(a[j] < p) {
            swap(a[j], a[i]);
            i++;
        }
    }
    swap(a[left], a[i-1]);
    return i-1;
}

void sort(int *a, int left, int right) {
    if(left >= right)
        return ;
    int p = partition(a, left, right);
    sort(a, left, p - 1);
    sort(a, p + 1, right);
}

int main() {
    sort(target, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << target[i] << ' ';
    }
}

