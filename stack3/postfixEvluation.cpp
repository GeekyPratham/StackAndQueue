#include <iostream>
#include <stack>
using namespace std;
int solve(int a,int b,char x){
    if(x=='+') return a+b;
    else if(x=='-') return a-b;
    else if(x=='*') return a*b;
    else if(x=='/') return a/b;
  
}
int main(){
    string s="79+4*8/3-";
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if( s[i]>='0' && s[i]<='9') st.push(s[i]-48);
        else if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/' ){
            char ch = s[i];
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
                    
            int ans = solve(val1,val2,ch);
            st.push(ans);
        }
    }
    cout<<st.top();

}