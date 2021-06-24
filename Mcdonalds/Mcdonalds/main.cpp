#include <iostream>

using namespace std;

int main() {
    int min_burger = 999999999;
    int min_drinks = 99999999;
    int price;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &price);
        if(price < min_burger && i < 3)
            min_burger = price;
        else if(price < min_drinks && i < 5)
            min_drinks = price;
    }
    cout << min_drinks + min_burger - 50 << endl;
}
