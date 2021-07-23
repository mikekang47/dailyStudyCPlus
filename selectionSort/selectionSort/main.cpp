#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1,8,3,5,6,2,9,4,10,7};
    for(int i = 0; i < arr.size(); i++) {
        int min = arr[i];
        for(int j = i+1; j < arr.size(); j++) {
            if(min > arr[j]) {
                min = arr[j];
                swap(arr[i], arr[j]);
            }
        }
        cout << arr[i] << ' ';
    }
}
