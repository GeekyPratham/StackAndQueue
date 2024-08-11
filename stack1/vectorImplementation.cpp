#include <iostream>
#include <vector>
using namespace std;

class Stack{//user defined data structures
public:
    vector<int> v; // no overflow condition
    
    //constructor
    Stack(){

    }



    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"stack is empty! "<<endl;
            return;
        }
        v.pop_back();

    }
    int top(){
        if(v.size()==0){
            cout<<"stack is empty! "<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }

};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);
    st.push(60);
    st.push(70); // iske karan stack is full aa raha hai
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    


}