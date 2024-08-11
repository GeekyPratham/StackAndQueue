#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(50);
    dq.push_back(60);
    for(int i = 0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<dq.front();
}