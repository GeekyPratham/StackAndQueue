#include <iostream>
#include <stack>
using namespace std;
int pr(char a){
    if(a=='+'|| a== '-') return 1;
    else if(a=='*'|| a== '/') return 2;

    return 0;
}
int solve(int a,int b,char x){
    if(x=='+') return a+b;
    else if(x=='-') return a-b;
    else if(x=='*') return a*b;
    else if(x=='/') return a/b;
      return 0;
}
int main(){
    string s = "7+9*4/8";
    stack<int> val;
    stack<char> op;
  
    for(int i=0;i<s.size();i++) {

        //check if s[i] is a digit (0-9);
        if(s[i]>='0' && s[i]<='9'){ //digit
            val.push(s[i]-'0');
            
        }

        else {  //s[i]=='+'|| s[i]=='-'|| s[i]=='*'|| s[i]=='/'){
            if(op.size()==0  || pr(op.top())<pr(s[i]) ){
                op.push(s[i]);
               
            }
            
            else{//pr(op.top())>=pr(s[i])
                // i have to do val1 op val2;
                while(op.size()>0 && pr(op.top())>=pr(s[i])){
              
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                
                int ans = solve(val1,val2,ch);
                val.push(ans);
                }
                op.push(s[i]);
            }
        }
        

    }

    // the operator stack can have values;
    // so make it empty

    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);       
    }

    cout<<val.top()<<endl;
   
}