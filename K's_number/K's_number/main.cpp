#include <bits/stdc++.h>

using namespace std;

//array [1,5,2,6,3,7,4]
//commands [[2, 5, 3], [4, 4, 1], [1, 7, 3]]
//return [5,6,3]


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++) {
        vector<int> temp;
        for(int j = commands[i][0]-1; j < commands[i][1]; j++) {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp.at(commands[i][2]-1));
    }
    return answer;
}

