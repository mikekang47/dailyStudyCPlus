#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<int> tree, bool check[]) {
    queue<int> q;
    int start = tree[0];
    q.push(start);
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        int curIdx = (int)(find(tree.begin(), tree.end(), cur) - tree.begin());
        if(!check[cur]) {
            check[cur] = true;
            cout << cur << ' ';
        }
        
        int rightIdx = curIdx * 2 + 2;
        int leftIdx = curIdx * 2 + 1;
        
     
        if(leftIdx < tree.size()) {
            int left = tree[leftIdx];
            if(left) {
                q.push(left);
            }
        }
        
        if(rightIdx < tree.size()) {
            int right = tree[rightIdx];
            if(right) {
                q.push(right);
            }
        }
        
    }
}

int main() {
    vector<int> g = {10,4,9,3,1,2,7,5,6};
    bool visit[9] = {false};
    bfs(g, visit);
}
