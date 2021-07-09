#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    string b;
    string c;
    string d;
    long long temp1;
    long long  temp2;
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    temp1 = stoll(a);
    temp2 = stoll(c);
    cout << temp1 + temp2;
}
