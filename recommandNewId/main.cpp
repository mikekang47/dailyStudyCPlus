#include <string>
#include <vector>
#include <regex>
#include <cctype>

using namespace std;

string first(string new_id) {
    for(int i = 0; i < new_id.length(); i++) {
        if(isupper(new_id[i])) {
            new_id[i] = tolower(new_id[i]);
        }
    }
    return new_id;
}

string second(string new_id) {
    string temp = "";
    for(int i = 0; i < new_id.length(); i++) {
        if(!isalpha(new_id[i]) && new_id[i] != '-' && new_id[i] != '_' && new_id[i] != '.' && !isdigit(new_id[i])) {
            continue;
        } else {
            temp += new_id[i];
        }
    }
    return temp;
}

string third(string new_id) {
    regex r("\\.\\.");
    while(regex_search(new_id, r)) {
        new_id = regex_replace(new_id, r, ".");
    }
    return new_id;
}

string fourth(string new_id) {
    string temp="";
    for(int i = 0; i < new_id.size(); i++) {
        if(i == 0 && new_id[i] == '.') {
            continue;
        } else if(i == new_id.size()-1 && new_id[i] == '.') {
            continue;
        } else {
            temp += new_id[i];
        }
    }
    return temp;
}

string fifth(string new_id) {
    if(new_id == "") {
        new_id += "a";
    }
    return new_id;
}

string sixth(string new_id) {
    string temp = "";
    if(new_id.length() >= 16) {
        for(int i=0 ; i < 15; i++) {
            if(new_id[i] == '.' && i == 14) {
                break;
            }
            temp += new_id[i];
        }
        return temp;
    } else {
        return new_id;
    }
}

string seventh(string new_id) {
    if(new_id.size() <= 2) {
        char t = new_id[new_id.length()-1];
        while(new_id.size() != 3) {
            new_id += t;
        }
    }
    return new_id;
}

string solution(string new_id) {
    new_id = first(new_id);
    new_id = second(new_id);
    new_id = third(new_id);
    new_id = fourth(new_id);
    new_id = fifth(new_id);
    new_id = sixth(new_id);
    new_id = seventh(new_id);
    return new_id;
}