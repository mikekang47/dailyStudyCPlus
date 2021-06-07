#include <iostream>
#include <vector>
#include <random>


using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < arr.size(); i++) {
        mt19937 rng(arr.size() - i);
        uniform_int_distribution<__int64_t> dist1(-3, 3);
        int r = i + dist1(rng);
        swap(arr[i], arr[r]);
    }
    for(auto i : arr) {
        cout << i << ' ';
    }
}
