#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string check(double a) {
    if(a >= 90) {
        return "A";
    } else if(a>= 80){
        return "B";
    } else if(a >= 70) {
        return "C";
    } else if(a >= 50) {
        return "D";
    } else {
        return "F";
    }
}

string solution(vector<vector<int>> scores) {
    string answer = "";
    int size = scores.size();
    vector<int> point[11];

    for(int i = 0; i < scores.size(); i++) {
        for(int j = 0; j < scores[i].size(); j++) {
            point[j].push_back(scores[i][j]);
        }
    }

    for(int i = 0; i < scores.size(); i++) {
        int sum = 0;

        int max = *max_element(point[i].begin(), point[i].end());
        int min = *min_element(point[i].begin(), point[i].end());

        int people = 0;

        for(int j = 0; j < scores.size(); j++) {
            if((i==j && count(point[i].begin(), point[i].end(), max) == 1 && point[i][j] == max) || (i==j && count(point[i].begin(), point[i].end(), min) == 1) && point[i][j] == min) {
                continue;
            } else {
                sum += point[i][j];
                people++;
            }
        }
        answer += check((double)sum/people);
    }
    return answer;
}