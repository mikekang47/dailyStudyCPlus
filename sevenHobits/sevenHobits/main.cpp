#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> hobit;

int main() {
    int sum = 0;
    int over;
    int a = 0;
    int b = 0;
    for(int i = 0; i <9; i++) {
        int a;
        cin >> a;
        hobit.push_back(a);
        sum += a;
    }
    sort(hobit.begin(), hobit.end());
    over = sum - 100;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j< 9; j++) {
            if(hobit[i] + hobit[j] == over) {
                a = hobit[i];
                b = hobit[j];
            }
        }
    }
    for(int i = 0; i < 9; i++) {
        if(hobit[i] == a || hobit[i] == b) {
            continue;
        }
        cout << hobit[i] << "\n";
    }
    
}
