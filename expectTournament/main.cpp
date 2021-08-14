#include <iostream>
#include <math.h>

using namespace std;

int solution(int n, int a, int b) {
    int answer = 0;
    while(1) {
        a = round((double)a/2);
        b = round((double)b/2);
        answer++;
        if(a == b) {
            break;
        }
    }
    return answer;
}