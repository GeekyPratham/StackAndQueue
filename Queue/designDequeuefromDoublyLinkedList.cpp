#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque{
public:
    Node* head;
    Node* tail;
    int length;
    Deque(){
        head = tail = NULL;
        length = 0;
    }
    void pushBack(int val){
        Node* temp = new Node(val);
        if(length==0){
            head = tail = temp;

        }
        else{
            tail->next=temp;
            temp->prev=tail; //extra
            tail= temp;
        }
        length++;
        
    }

    void pushFront(int val){
        Node* temp = new Node(val);
        if(length==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;//extra
            head = temp;
        }
        length++;
    }
    
    
    void popFront(){//deletion ho rahi hai tho kuch pass karna ka jarurat nahi hoga
        if( length == 0 ){
            cout<<"list is empty";
            return;
        }
        else{
            head = head->next;
            if(head)head->prev = NULL; //extra
            if(head==NULL) tail = NULL;
            length--;
            return;
        }

    }
    void popBack(){
        
        if(length==0){
            cout<<"list is empty";
            return;
        }
        else if(length==1){  // extra
            popFront();
            return;
        }
        else{
           Node* temp = tail->prev;
           temp->next =NULL;
           tail = temp;
           length--;
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
    int size(){
        return length;

    }

    bool isEmpty(){
        if(length==0) return true;
        else return false;
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);

    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
}
