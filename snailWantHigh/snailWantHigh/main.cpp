#include <iostream>

using namespace std;

int main() {
    int a, b, v;
    int fin;
    int day;
    scanf("%d %d %d", &a, &b, &v);
    fin = a - b;
        v = v - a;
        if ((double)v / fin != v / fin) {
            day = (v / fin) + 2;
        }
        else day = (v / fin) + 1;
    
    printf("%d", day);
}
