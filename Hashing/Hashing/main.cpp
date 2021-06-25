#include <iostream>
#include <string>
#include <map>
#include <math.h>

using namespace std;

map<char, int> mp;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    long long result = 0;
    long long r = 1;
    
    for(int i = 0; i < n; i++) {
        result = (result + (s[i] - 'a' + 1)*r) % 1234567891;
        r = (r * 31) % 1234567891;
    }
    cout << result;
}
