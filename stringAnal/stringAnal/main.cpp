#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


int main() {
    for(int j = 0; j < 100; ++j) {
        string s;
        getline(cin, s);
        if(s.length() == 0) {
            break;
        }
        int upper = 0;
        int lower = 0;
        int digit = 0;
        int space = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(isupper(s[i])) {
                upper++;
            }
            else if(islower(s[i])) {
                lower++;
            }
            else if(isdigit(s[i])) {
                digit++;
            }
            else {
                space++;
            }
        }
        cout << lower <<  " "<< upper <<  " "<< digit <<  " "<< space << "\n";
        
        
    }
   
}
