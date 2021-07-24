#include <iostream>

using namespace std;

int n, d[3], t[2200][2200];

void f(int n, int a, int b) {
    int tmp = t[a][b];
    for (int i = a; i < a+n; i++)
        for (int j = b; j < b+n; j++)
            if (tmp != t[i][j])
                goto brk;
    d[tmp + 1]++;
    return;
    brk:
        n /= 3;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                f(n, a + n * i, b + n * j);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> t[i][j];

    f(n, 0, 0);
    cout << d[0] << ' ' << d[1] << ' ' << d[2];
}