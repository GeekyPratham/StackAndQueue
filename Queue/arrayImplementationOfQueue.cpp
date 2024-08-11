#include <iostream>
#include <vector>
using namespace std;
class Queue{
public:
    int f; // front
    int r; // rear or back
    // int arr[5];
    vector<int> arr;

    // constructor
    // Queue(){
    //     f = 0;
    //     r = 0;
    // }

    // modified constructor
    Queue(int val){
        
        f=0;
        r=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(r == arr.size()){   // (r==5)
            cout<<"queue is full"<<endl;
            return;
        }
       
        arr[r] = val;
        r++;
        
    }

    void pop(){
        if(r-f==0) {
            cout<<"queue is empty"<<endl;
            return;
        }
        // f++;
        // Shift all elements one position to the left
        for (int i = f + 1; i < r; i++) {
            arr[i - 1] = arr[i];
        }
        r--;
    }
    int front(){
        if(r-f==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int rear(){
        if(r-f==0) {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[r-1];
    }

    int size(){
        return r-f;
    }

    bool isEmpty(){
        if(r-f==0) return true;
        else return false;
    }
    void display(){
        for(int i=0;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    // Queue q;

    // we want to enter size inside queue then constructor will modified
    Queue q(5);
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