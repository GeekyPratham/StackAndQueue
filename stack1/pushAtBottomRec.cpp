#include <iostream>
#include <stack>
using namespace std;

void displayrevrec(stack<int>& st){
     // base case;
    if(st.size()==0) {
       
        return; 
    }
    
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayrevrec(st);
    st.push(x);


}

void displayrec(stack<int>& st){
    // base case;
    if(st.size()==0) {
    
         return;
    }
    int x = st.top();
    st.pop();
    displayrec(st);
    cout<<x<<" ";
    st.push(x);

    
}

void pushAtBottom(stack<int>& st,int val){
     // base case;
    if(st.size()==0) {
        st.push(val);
        return; 
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);


}



int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    displayrevrec(st);
    cout<<endl;
    pushAtBottom(st,100);
    cout<<endl;
    displayrevrec(st);
    cout<<endl;
    displayrec(st);
    
    
}
