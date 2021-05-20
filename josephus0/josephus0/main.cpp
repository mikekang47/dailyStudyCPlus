#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
queue<int> temp;
int main() {
    int n;
    int k;
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    cout << '<';
    while(!q.empty()) {
        int num = k;
        while(1) {
            if(num == 1) {
                if(q.size() == 1) {
                    cout << q.front() << ">";
                    q.pop();
                    break;
                }
                else {
                    cout << q.front() << ", ";
                    q.pop();
                    break;
                }
            }
            else {
                temp.push(q.front());
                q.pop();
                q.push(temp.front());
                temp.pop();
            }
            num--;
        }
    }
    cout << "\n";
}
