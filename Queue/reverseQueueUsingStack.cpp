#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i =0;i<n;i++){
        cout<<q.front()<<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int>& q){
    stack<int> st;
    // empty the queue to the stack
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    // empty the stack to the queue
    while(st.size()>0){
        // cout<<st.top()<<" ";
        q.push(st.top());
        st.pop();
    }
    cout<<endl;
}
int main(){
    
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverse(q);

    display(q);
}