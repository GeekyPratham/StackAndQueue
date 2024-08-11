
#include <iostream>
#include <stack>
using namespace std;
int pr(char a){
    if(a=='+'|| a== '-') return 1;
    else if(a=='*'|| a== '/') return 2;

    return 0;
}
string solve(string a,string b,char x){
    string s="";
    s+=a+b+x;
    return s;
}
int main(){
    // string s = "2+6*4/8-3";
    string s = "(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
  
    for(int i=0;i<s.size();i++) {

        //check if s[i] is a digit (0-9);
        if(s[i]>='0' && s[i]<='9'){ //digit
            val.push(to_string(s[i]-'0'));
            
        }

        else {  //s[i]=='+'|| s[i]=='-'|| s[i]=='*'|| s[i]=='/'){
            if(op.size()==0  || s[i]=='('   || op.top()=='(' || pr(op.top())<pr(s[i])){
                op.push(s[i]);
               
            }
            else if(s[i]==')'){
                while(op.top()!='('){
                    if(op.size()>0 && pr(op.top())>=pr(s[i])){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                    }

                }
                op.pop();
            }
            
            else{//pr(op.top())>=pr(s[i])
                // i have to do val1 op val2;
                while(op.size()>0 && pr(op.top())>=pr(s[i])){
              
                char ch = op.top();
                op.pop();
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                
                string ans = solve(val1,val2,ch);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);       
    }

    cout<<val.top()<<endl;
   
}
