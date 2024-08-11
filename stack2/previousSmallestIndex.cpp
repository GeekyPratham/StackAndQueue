#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void prevGreaterNo(int arr[],int n){
    vector<int> pgn;
    stack<int> st;
    pgn.push_back(-1);
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.size()==0){
            pgn.push_back(-1);

        }
        else{
            pgn.push_back(st.top());
        }
        st.push(i);
    }
    // reverse(pgn.begin(),pgn.end());
    for(int i=0;i<pgn.size();i++){
        cout<<pgn[i]<<" ";
    }

}

int main(){

        int arr[] = {2,1,5,6,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    prevGreaterNo(arr,n);
    
}