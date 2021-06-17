#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using namespace std;

bool cmp (pair<int, string> u, pair<int, string> v)
{
    return u.first < v.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int,string>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
}
