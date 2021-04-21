#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int>moves) {
    int answer = 0;
    stack <int> s;
    for(int i = 0; i < moves.size(); i++) {
        int check = moves[i] - 1;
        for(int j = 0; j < board.size(); i++) {
            if(board[j][check] != 0) {
                if(!s.empty() && s.top() == board[j][check]) {
                    answer += 2;
                    s.pop();
                }
                else
                    s.push(board[j][check]);
                
                board[j][check] = 0;
                break;
            }
        }
    }
    return answer;
}

