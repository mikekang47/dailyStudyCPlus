#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int solution(int n) {
    int answer = 0;
    int acc = 0;
    for(int i = 1; i <= n; i++) {
        q.push(i);
        acc += i;
        if(acc > n) {
            while(acc > n) {
                acc -= q.front();
                q.pop();
            }
        }
        if(acc == n) {
            answer++;
        }
    }
    return answer;
    
}

int main() {
    cout << solution(15);
    
}
