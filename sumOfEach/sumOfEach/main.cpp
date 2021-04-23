#include <iostream>

using namespace std;
int answer = 0;

int solution(int n)
{
    if(n < 10) {
        return n;
    }
    
    return solution(n % 10) + solution(n / 10);
}

