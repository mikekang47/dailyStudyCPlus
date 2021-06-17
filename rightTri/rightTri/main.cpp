#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>


using namespace std;

vector<int> v(3);

int main() {
    while(1) {
        for(int i =0 ; i < 3; i++) {
            cin >> v[i];
        }
        if(v[0] == 0 && v[1] ==0 && v[2] == 0) {
            break;
        }
        sort(v.begin(), v.end());
        if(pow(v[0],2) + pow(v[1],2) == pow (v[2],2)) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }
}
