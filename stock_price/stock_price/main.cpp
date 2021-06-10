#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    queue<int> q;
    bool flag = false;
    int index = 0;
    for(auto i : prices) {
        q.push(i);
    }
    while(!q.empty()) {
        for(int i = prices.size() - q.size() ; i < prices.size(); i++) {
            if(q.front() > prices[i]) {
                index = i;
                answer.push_back(index - (prices.size() - q.size()));
                flag = true;
                q.pop();
                break;
            }
            //2의 인덱스는 4
            //큐의 사이즈는 4
            //가격 사이즈 6
        }
        if(flag == false) {
            answer.push_back(q.size()-1);
            q.pop();
        }
        flag = false;
    }
    return answer;
}
