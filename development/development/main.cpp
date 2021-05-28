#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<int> q;
queue<int> speed;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day = 1;
    int num = 0;
    for(int i = 0; i < progresses.size(); i++) {
        q.push(progresses[i]);
        speed.push(speeds[i]);
    }
    while(!q.empty()) {
         while((100-q.front()) <= speed.front() * day) {
             q.pop();
             speed.pop();
             num++;
        }
        if(num != 0) {
             answer.push_back(num);
        }
        num = 0;
        day++;
    }
   
    return answer;
}
