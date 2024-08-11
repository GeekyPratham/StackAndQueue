#include <iostream>
using namespace std;

class Node{  // user defined data type
public: 
    int val;
    Node* next;
    
    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Stack{//user defined data structures
public:
    Node* head;
    int size;
    
    //constructor
    Stack(){
         head = NULL;
         size = 0;
    }



    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head == NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    void displayrev(){ // it display in reverse order

        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void print(Node* temp){
        if(temp == NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
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
    st.displayrev();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.displayrev();

    st.display();
    


}