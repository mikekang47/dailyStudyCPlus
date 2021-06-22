#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> lans;

int main() {
    long n, k, answer;
    long long  input;
    long long left, mid, right;
    answer = 0;
    cin >> k >> n;
    for(int i = 0; i < k; i++) {
        cin >> input;
        lans.push_back(input);
    }
    
    left = 1; right = *max_element(lans.begin(), lans.end());
    
    while(left <= right) {
        int temp = 0;
        mid = (left + right)/2;
        
        for(int i = 0; i < lans.size(); i++) {
            temp += lans[i] / mid;
        }
        if(temp < n) {
            right = mid - 1;
        } else {
            if(answer < mid) answer = mid;
            left = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
    
}
