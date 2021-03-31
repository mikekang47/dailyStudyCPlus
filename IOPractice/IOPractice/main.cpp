#include <iostream>
#include <string>

using namespace std;

int main() {
    string mystring;
    mystring = "This is a string";
    cout << mystring << endl; //endl은 stream을 비워줄 뿐만 아니라 줄바꿈까지 포함
    mystring = "this is a different string";
    cout << mystring << endl;
    
    return 0;
}
