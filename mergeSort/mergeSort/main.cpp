#include <iostream>

using namespace std;

int sorted[12];

void merge_sort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

void merge(int arr[], int low, int mid, int high) {
    int i, j, k, l;
    i = low; j=mid+1; k=low;
    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j])
            sorted[k] = arr[i++];
        else
            sorted[k] = arr[j++];
        k++;
    }
    
    if(i > mid)
        for(l = j; l <= high; l++)
            sorted[k++] = arr[l];
    else
        for(l = i; l <= mid; l++)
            sorted[k++] = arr[l];
    for(l = low; l<= high; l++)
        arr[l] = sorted[l];
}

void merge_sort(int arr[], int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[12] = {21 ,92, 90, 46, 38, 59, 42, 44, 66, 39, 10, 1};
    merge_sort(arr, 0, 11);
    for(auto i : arr) {
        cout << i << ' ';
    }
}
