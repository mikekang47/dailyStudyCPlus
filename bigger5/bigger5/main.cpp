#include <iostream>
#include <queue>
#include <stack>

using namespace std;


vector<int> arr;
stack<int> st;


int main() {
    int foo;
    int temp;
    scanf("%d", &foo);
    for(int i = 1; i <= foo; ++i) {
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    vector<int> ans(arr.size(), -1);
    
    for(int i = 0; i < arr.size(); ++i) {
        while(!st.empty() && arr[st.top()] < arr[i]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    
    for(int i = 0; i < ans.size(); ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
   
}
