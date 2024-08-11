#include <iostream>
#include <stack>
using namespace std;

void display(stack<int>& st){
    stack<int> helper;
    // putting all the elements in helper stack;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    // fir se stack st me element bharna int same order as st original
    while(helper.size()>0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
}
void pushAtBottom(stack<int>& st,int val){  // & nahi lagaige toh pass by value ho jaiga aur original me change nahi aaiga
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);
    cout<<endl;
    pushAtBottom(st,80);
    display(st);
    
}
