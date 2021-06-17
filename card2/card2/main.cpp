#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    int n;
    cin >> n;
    for(int i = n; i >0; i--) {
        l.push_back(i);
    }
    while(l.size() != 1) {
        l.pop_back();
        int back = l.back();
        l.pop_back();
        l.push_front(back);
    }
    cout << l.front();
}
