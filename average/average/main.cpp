#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    vector<int> p(6);
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &p[i]);
        if(p[i] < 40)
            p[i] = 40;
        sum += p[i];
    }
    cout << sum / 5;
    
}
