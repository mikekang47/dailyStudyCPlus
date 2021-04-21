#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;
    for(int i = 0; i < d; ++i) {
        long x, y, length;
        cin >> x >> y;
        length = y - x;
        long move = 1;
        long turn = 1;
        long pos_pow = 0;
        
        while(move < length) {
            pos_pow++;
            
            turn++;
            move += pos_pow;
            if(move >= length)
                break;
            
            turn++;
            move += pos_pow;
            if(move >= length)
                break;
        }
        if(move > length)
            turn--;
        cout << turn << '\n';
    }
}
