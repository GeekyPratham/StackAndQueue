#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s="79+4*8/3-";
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if( s[i]>=48 && s[i]<=57) st.push(to_string(s[i]-48));
        else if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' ){
            // string ch = s[i];
            string val2 = st.top();
            st.pop();
            string val1 = st.top();
            st.pop();
                    
            string ans =val1+s[i]+val2;
            st.push(ans);
        }
    }
    cout<<st.top();

}