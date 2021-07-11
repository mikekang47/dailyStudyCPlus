#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> arr;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >>temp;
        arr.push_back(temp);
    }
    int total = 0;
    sort(arr.begin(), arr.end());
    vector<int> sum(n+1, 0);
    for(int i = 0; i < n; i++) {
        sum[i] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        sum[i+1] = sum[i] + sum[i+1];
    }
    for(int i = 0; i < sum.size()-1; i++) {
        total += sum[i];
    }
    
    cout << total;

}
