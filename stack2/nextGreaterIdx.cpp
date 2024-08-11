#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>


using namespace std;

void nextGreaterIdx(int arr[],int n){
    vector<int> ngi;
    stack<int> st;
    ngi.push_back(8);
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]>=arr[st.top()]){
            st.pop();
        }
        if(st.size()==0){
            ngi.push_back(n);

        }
        else{
            ngi.push_back(st.top());
        }
        st.push(i);
    }
    reverse(ngi.begin(),ngi.end());
    for(int i=0;i<ngi.size();i++){
        cout<<ngi[i]<<" ";
    }

}

int main(){
    // int arr[] = {3,1,2,5,4,6,2,3};
        int arr[] = {100,80,60,81,70,60,75,85};

    int n = sizeof(arr)/sizeof(arr[0]);
    nextGreaterIdx(arr,n);
    
}