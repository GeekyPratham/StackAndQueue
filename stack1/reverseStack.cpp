
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    cout<<endl;
    // element get in stack after printing;
    stack<int> temp;
    stack<int> t;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();  
    }
    cout<<endl;
    // putting ekements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        t.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    while(t.size()>0){
        cout<<t.top()<<" ";
        st.push(t.top());
        t.pop();
    }
    cout<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}