#include <iostream>
#include <string>

using namespace std;

string date[8] = {"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
int day[32] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
    int x, y;
    scanf("%d %d",&x, &y);
    int sum = 0;
    for(int i = 0; i < x; i++) {
        sum += day[i];
    }
    sum += y;
    cout << date[sum % 7] << "\n";
}
