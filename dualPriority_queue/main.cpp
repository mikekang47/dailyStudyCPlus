#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(vector<string> operations) {
    multiset<int> ms;
    for(int i = 0; i < operations.size(); i++) {
        string t = operations[i].substr(0,1);
        int num = stoi(operations[i].substr(2,operations[i].length()-1));
        if(t == "I") {
            ms.insert(num);
        } else if(t == "D" && !ms.empty()) {
            if(num == 1) {
                ms.erase(--ms.end());
            } else
                ms.erase(ms.begin());
        }
    }
    if(!ms.empty()) {
        return {*(--ms.end()), *ms.begin()};
    } else {
        return {0,0};
    }
}
