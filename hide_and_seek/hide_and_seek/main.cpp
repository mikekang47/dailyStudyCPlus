#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

vector<int> v;

int modifygcd(int a,int b) {
    return modifygcd(gcd(a,b), b);
}
int main() {
    int n;
    int s;
    int temp;
    cin >> n >> s;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        v.push_back(temp);
    }
    for(int i = 0; i < n; ++i) {
        v[i] = abs(s-v[i]);
    }
    sort(v.begin(), v.end(), greater<int>());
    temp = gcd(v[0], v[1]);
    for(int i = 2; i < n; ++i) {
        temp = gcd(temp, v[i]);
    }
    printf("%d", temp);
}
