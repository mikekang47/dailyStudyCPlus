#include <bits/stdc++.h>



using namespace std;

vector<int> answer;
vector<int> p1 = {1,2,3,4,5};
vector<int> p2 = {2,1,2,3,2,4,2,5};
vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};


vector<int> solution(vector<int> answers) {
    int score[3] = {0, };
    int maxScore = 0;
    for(int i = 0; i < answers.size(); i++) {
        if(answers[i] == p1[i % 5]) {
            score[0]++;
        }
        if(answers[i] == p2[i % 8]) {
            score[1]++;
        }
        if(answers[i] == p3[i % 10]) {
            score[2]++;
        }
    }
    maxScore = max(max(score[0], score[1]), score[1]);
    for(int i = 0; i < 3; i++) {
        if(score[i] == maxScore)
            answer.push_back(i + 1);
    }
    return answer;
}
