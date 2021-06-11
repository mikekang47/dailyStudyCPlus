#include <iostream>
#include <algorithm>

using namespace std;

#define INF 987654321
#define ARR_SIZE 101

int n, m;
int arr[ARR_SIZE][ARR_SIZE];
int a, b, c;

void floyd() {
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(arr[i][k] != INF && arr[k][j] != INF) {
                    arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            arr[i][j] = INF;
        }
    }
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        if(arr[a][b] > c) {
            arr[a][b] = c;
        }
    }
    floyd();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || arr[i][j] == INF) {
                cout << 0 << ' ';
            }
            else {
                cout << arr[i][j] << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}
