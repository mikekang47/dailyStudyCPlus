#include <iostream>
#define MAX 20000001

using namespace std;

int arr[MAX];
int main() {
    int n;
    int input;
    cin >> n;
    for(int i = 0;i < n; ++i) {
        scanf("%d", &input);
        arr[input+10000000]++;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &input);
        printf("%d ", arr[input + 10000000]);
    }
}
