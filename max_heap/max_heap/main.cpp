#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>

using namespace std;

int main() {
    priority_queue<int> pq;
    int n;
    scanf("%d", &n);
    while(n--) {
        int value;
        scanf("%d", &value);
        if(value == 0) {
            if(pq.empty()) {
                cout << "0\n";
            } else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        } else {
            pq.push(value);
        }
    }
    return 0;
}
