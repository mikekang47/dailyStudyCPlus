#include <string>
#include <vector>
#include <math.h>

using namespace std;


int solution(int n) {
    int answer = 0;
    vector<bool> check(10000001, true);
    if(n<=1){
        return 0;
    }
    for(int i = 2; i * i <= n; i++) {
        if(check[i]) {
            for(int j = i*i; j<= n; j+=i) {
                check[j] = false;
            }
        }
            
    }
    for(int i = 2; i <= n; i++) {
        if(check[i])
            answer++;
    }
    return answer;
}
