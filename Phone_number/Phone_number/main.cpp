#include <string>
#include <vector>
#include <iostream>
#include <regex>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    smatch m;
    regex e;
    for(int i = 0; i < phone_book.size()-1; i++){
        e = phone_book[i];
        if(regex_search(phone_book[i+1], m, e) && (m.suffix().length() + m.length()) == phone_book[i+1].length()){
            return false;
        }
    }
    return true;
}
