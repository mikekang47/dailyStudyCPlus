#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n,1);
    
    for(int i = 0; i < lost.size(); i++) {
        student[lost[i]-1]--;
    }
    
    for(int i = 0; i < reserve.size(); i++) {
        student[reserve[i]-1]++;
    }
    
    for(int i = 0; i < student.size(); i++) {
        if(student[i] == 0) {
            if(i != 0 && student[i-1] == 2) {
                student[i-1]--;
                student[i]++;
            }
            else if (i != student.size() - 1 && student[i + 1] == 2) {
                student[i+1]--;
                student[i]++;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(student[i] != 0) {
            answer++;
        }
    }
    
    return answer;
}

int main() {
    printf("%d ", solution(5, {2,4}, {1,3,5}));

}


