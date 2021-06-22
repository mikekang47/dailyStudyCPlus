#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool cmp(pair<int, int> a, pair<int,int>b) {
    if(a.second == b.second) {
        return a.first < b.first;
    } else
        return a.second < b.second;
}
int main() {
    int t;
    int x;
    int y;
    scanf("%d", &t);
    vector<pair<int, int>> co;
    for(int i = 0; i < t; i++) {
        scanf("%d %d",&x, &y);
        co.push_back(make_pair(x, y));
    }
    sort(co.begin(), co.end(), cmp);
    for(int i = 0; i < t; i++) {
        cout << co[i].first << ' ' << co[i].second << "\n";
    }
}
