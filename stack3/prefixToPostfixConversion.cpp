#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s="-/*+79483";
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if( s[i]>='0' && s[i]<='9') st.push(to_string(s[i]-48));
        else if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' ){
    
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
                    
            string ans = val1+val2+s[i];
            st.push(ans);
        }
    }
    cout<<st.top();

}