#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;



int main() {
    string str = "(())";
    regex re("\\(\\)");
    string s = regex_replace(str, re, "x");
    cout << s;
    // (x)가 출력
    return 0;
    
}
