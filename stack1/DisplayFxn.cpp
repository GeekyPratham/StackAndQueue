// reverse a stack using two extra stacks;
// #include <iostream>
// #include <stack>
// using namespace std;

// void display(stack<int> st){
//     stack<int> helper;
//     // putting all the elements in helper stack;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }
//     // fir se stack st me element bharna int same order as st original
//     while(helper.size()>0){
//         cout<<helper.top()<<" ";
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// int main(){
//     stack<int> st;
//     cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     display(st);
//     cout<<endl;
//     stack<int> ss;
//     stack<int> ts;
//     while(st.size()>0){
//         ss.push(st.top());
//         st.pop();
//     }
//     while(ss.size()>0){
//         ts.push(ss.top());
//         ss.pop();
//     }
//     while(ts.size()>0){
//         st.push(ts.top());
//         ts.pop();
//     }
//     display(st);
//     cout<<endl; 
// }


// reverse a stack using array;

// #include <iostream>
// #include <stack>
// using namespace std;
// void display(stack<int> st){
//     stack<int> helper;
//     // putting all the elements in helper stack;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }
//     // fir se stack st me element bharna int same order as st original
//     while(helper.size()>0){
//         cout<<helper.top()<<" ";
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// int main(){
//     stack<int> st;
//     cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int n = st.size();
//     int arr[n];
//     int i =0;
//     while(st.size()>0){       
//         arr[i] =st.top();
//         st.pop();
//         i++;
//     }
//     for(int i=n-1;i>=0;i--){
//         st.push(arr[i]);
//     }

//     display(st);
    
// }

// reverse using vector;

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// void display(stack<int> st){
//     stack<int> helper;
//     // putting all the elements in helper stack;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }
//     // fir se stack st me element bharna int same order as st original
//     while(helper.size()>0){
//         cout<<helper.top()<<" ";
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// int main(){
//     stack<int> st;
//     cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     int n = st.size();
//     vector<int> v;
//     int i =0;
//     while(st.size()>0){       
//         v.push_back(st.top());
//         st.pop();
//         i++;
//     }
//     for(int i=n-1;i>=0;i--){
//         st.push(v[i]);
//     }
//     display(st);
// }


// reverse using  doubly linked list;

#include <iostream>
#include <stack>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val  = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(stack<int> st){
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
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int n = st.size();
    Node* temp = new Node(0);
    Node* tc  = temp;
    int i =0;
    while(st.size()>0){       
        Node* a = new Node(st.top());
        tc->next = a;
        tc->next->prev = tc;
        tc = tc->next;
        st.pop();
        i++;
    }
    int len = 0;
    tc = temp->next;
    tc->prev = NULL;
    while(tc->next !=NULL){
        tc=tc->next;
    }
    while(tc!=NULL){
        st.push(tc->val);
        tc=tc->prev;
    }    
    display(st);
}

