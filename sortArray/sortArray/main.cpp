#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    int input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
