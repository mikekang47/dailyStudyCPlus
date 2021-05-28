#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(int n) {
    string answer = "";
    stack<int> st;
    while(n > 3) {
        int temp = n % 3;
        if(temp == 0) {
            st.push(3);
            n = n/3 -1;
        }
        else {
            st.push(n%3);
            n = n/3;
        }
    }
    st.push(n);
    
    while (!st.empty()) {
        int num = st.top();
        st.pop();
        if (num == 3)
            answer += "4";
        else
            answer += to_string(num);
    }

    return answer;
}
