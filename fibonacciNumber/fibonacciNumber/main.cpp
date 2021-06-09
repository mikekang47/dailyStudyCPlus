#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(int n) {
    int answer = 0;
    long long fibo[100001] = {0,};
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= n+1; i++) {
        fibo[i] = (fibo[i-1] + fibo[i-2]) % 1234567;
    }
    answer = fibo[n];
    return answer;
}
