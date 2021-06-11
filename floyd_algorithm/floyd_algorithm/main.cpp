#include <iostream>

using namespace std;

int number = 5;
int INF = 10000000;

int a[5][5] = {
    {0, 1, INF, 1, 5},
    {9, 0, 3, 2, INF},
    {INF, INF, 0, 4, INF},
    {INF, INF, 2, 0, 3},
    {3, INF, INF, INF, 0}
};

void floyd() {
    int d[number][number];
    
    for(int i = 0; i < number; i++) {
        for(int j = 0; j < number; j++) {
            d[i][j] = a[i][j];
        }
    }
    
    for(int k = 0; k < number; k++) {
        for(int i = 0; i < number; i++) {
            for(int j = 0; j < number; j++) {
                if(d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    
    for(int i = 0; i < number; i++) {
        for(int j = 0; j <number; j++) {
            printf("%3d ", d[i][j]);
        }
        printf("\n");
    }
}

int main() {
    floyd();
}
