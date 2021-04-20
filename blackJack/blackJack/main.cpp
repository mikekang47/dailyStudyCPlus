#include <iostream>

using namespace std;

int arr[1000001] = {0};

int main() {
    int n;
    int m;
    int sum = 0;
    int res = -1;
    cin >> n >> m;
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n-2; i++) {
        for(int j= i+1; j < n-1; j++) {
            for(int k = j + 1; k < n; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= m)
                    res = max(res, sum);
            }
        }
    }
    cout << res;
}
