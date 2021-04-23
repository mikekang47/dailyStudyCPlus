#include <string>
#include <vector>

using namespace std;
// 48 60
int gcd(int a, int b){
    
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}


vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(n*m/gcd(n,m));
    
    return answer;
}
