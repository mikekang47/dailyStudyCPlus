#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << "666\n";
    } else {
        if(n < 10) {
            cout << to_string(n-1) + "666" + "\n";
        } else if(n < 100) {
            cout << to_string((n-1)/10) + "6666" + "\n";
        } else if(n < 1000) {
            cout << to_string((n-1)/100) + "66666" + "\n";
        } else if(n < 10000) {
            cout << to_string((n-1)/1000) + "66666" + "\n";
        }
       
    }
}
