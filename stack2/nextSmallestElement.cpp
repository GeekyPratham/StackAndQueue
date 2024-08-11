#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void prevGreaterNo(int arr[],int n){
    vector<int> pgn;
    stack<int> st;
    pgn.push_back(n);
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]<=st.top()){
            st.pop();
        }
        if(st.size()==0){
            pgn.push_back(n);

        }
        else{
            pgn.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(pgn.begin(),pgn.end());
    for(int i=0;i<pgn.size();i++){
        cout<<pgn[i]<<" ";
    }

}

int main(){

        int arr[] = {2,1,5,6,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    prevGreaterNo(arr,n);
    
}