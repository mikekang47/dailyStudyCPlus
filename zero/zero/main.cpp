#include <iostream>
#include <stack>
#include <numeric>
#include <vector>

using namespace std;

stack<int> st;
vector<int> v;

int main() {
    int k;
    cin >> k;
    for(int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        if(n == 0) {
            v.pop_back();
        }
        else {
            v.push_back(n);
        }
    }
    printf("%d", accumulate(v.begin(),v.end(), 0));
}
