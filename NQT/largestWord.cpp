#include <iostream>
using namespace std;

int solve(string s){
    int n=0;
    for(int i=0;i<s.length();i++){
        int x=0;
        while(i<s.length() && s[i]!=' '){
            x++;
            i++;
        }
        if(x>n) n=x;
    }
    return n;
}

int main(){
    string s;
    cout<<"Enter string :";
    getline(cin,s);
    cout<<endl<<solve(s);
    return 0;
}