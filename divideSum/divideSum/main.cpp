#include <iostream>
#include <cstring>


using namespace std;

int main() {
    long n;
    cin >> n;
    long m = n;
    int digit = 0;
    char s[10];
    while (m != 0) {
        m /= 10;
        digit++;
    }
    long sum = 0;
    
    long begin = n - digit * 9;
    bool find = false;
    for(long i = begin; i <= n; i++) {
        sprintf(s, "%ld", i);
        sum = i;
        for(int j = 0; j < strlen(s); j++) {
            sum += s[j] - '0';
        }
        if(sum == n) {
            find = true;
            cout << i << '\n';
            break;
        }
       
    }
    if(find == false)
        cout << "0\n";
    return 0;
}

