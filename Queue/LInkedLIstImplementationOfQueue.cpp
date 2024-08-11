#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    //constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
public:
    Node* head;
    Node* tail;
    int length;
    Queue(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(length==0){
            head = tail = temp;

        }
        else{
            tail->next=temp;
            tail= temp;
        }
        length++;
        
    }

    void pop(){//deletion ho rahi hai tho kuch pass karna ka jarurat nahi hoga
        if( length == 0 ){
            cout<<"queue is empty"<<endl;
            return;
        }
        // else if(size==1){
        //     head = tail = NULL;
        //     size--;
        //     return;
        // }
        else{
            Node* temp = head;
            head = head->next;
            length--;
            delete(temp);  // issee mera wastage of memory/space nahi hoga
            
            return;
        }

    }
    
    int front(){
        if(length==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(length==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(){
        return length;

    }
    bool isEmpty(){
        if(length==0) return true;
        else return false;
    }
};
int main(){
    Queue q;
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.pop();
    q.display();
    
}