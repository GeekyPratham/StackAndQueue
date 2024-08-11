#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s="*-A/BC-/AKL";
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        // if( s[i]>='A' && s[i]<='Z') st.push(string(1,s[i])); //it will print in terms of capital letter
        if( s[i]>='A' && s[i]<='Z') st.push(to_string(s[i])); // it will print in terms of digit

        else if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' ){
    
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
                    
            string ans = val1+s[i]+val2;
            st.push(ans);
        }
    }
    cout<<st.top();

}