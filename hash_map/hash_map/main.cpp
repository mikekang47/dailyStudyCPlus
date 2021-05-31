#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<int, string> h;

int main() {
    h.insert(make_pair(3, "gyeong"));
    cout << h.at(3);
}




