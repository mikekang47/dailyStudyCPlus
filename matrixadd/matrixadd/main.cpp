#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr1 = {{3,4},{4,4}};
    vector<vector<int>> arr2 = {{1,1},{2,2}};
    vector<vector<int>> answer = {{0}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            answer[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
  
    cout << answer[0][0];
}
