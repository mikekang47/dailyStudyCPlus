#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[10] = {1,3,2,5,4,6,7,8,9, 10};
    for(int i = 0; i < 10; i++) {
        int min = i;
        for(int j= i+1; j < 9; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
        cout << arr[i] << ' ';
    }
}
