#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack <char> c;
    if(s.length()==0){
        return true;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            c.push(s[i]);
        }
        else if(!c.empty()){
            if(c.top()=='(' && s[i]==')')
                c.pop();
            else if(c.top()=='{' && s[i]=='}')
                c.pop();
            else if(c.top()=='[' && s[i]==']')
                c.pop();
            else c.push(s[i]);
        }
    }
        if(!c.empty())
            return false;
        return true;
}
int main(){
    string s = "{[(()]})";
    cout<<isValid(s);

}
