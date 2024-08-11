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
    
    // printing all the elements of stack in reverse order but after printing stack become empty

    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    cout<<endl;
    // element get in stack after printing;
    stack<int> temp;
    
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();  
    }
    cout<<endl;
    // putting ekements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    
}