#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int count = 0;
    long long temp = num;
    while(temp != 1) {
        if(count >= 500) {
            count = -1;
            break;
        }
        
        if(temp % 2 == 0) {
            temp /= 2;
            count++;
        }
        else {
            temp = temp * 3;
            temp++;
            count++;
        }
        
    }
   
    answer = count;
    return answer;
}
