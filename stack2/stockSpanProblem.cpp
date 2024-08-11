#include <iostream>
#include <stack>
#include <vector>



using namespace std;

void prevGreaterNo(int arr[],int n){
    vector<int> pgn;
    stack<int> st;
    pgn.push_back(1);
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[i]>=arr[st.top()]){
            st.pop();
        }
        if(st.size()==0){
            pgn.push_back(i+1);

        }
        else{
            pgn.push_back(i-st.top());
        }
        st.push(i);
    }
    for(int i=0;i<pgn.size();i++){
        cout<<pgn[i]<<" ";
    }

}

int main(){
    // int arr[] = {3,1,2,5,4,6,2,3};
        int arr[] = {100, 80 ,60 ,70 ,60, 75 ,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    prevGreaterNo(arr,n);
    
}