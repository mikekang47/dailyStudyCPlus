#include <iostream>
#include <vector>

using namespace std;

int target[12] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8, 25, 10};
int n = 12;


int partition(int *a, int left, int right) {
    int p = a[left];
    int i = left + 1;
    for(int j = i; j <= right; j++) {
        if(a[j] < p) {
            swap(a[i], a[j]);
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
    sort(a, left, p);
    sort(a, p + 1, right);
}

int main() {
    sort(target, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << target[i] << ' ';
    }
}

