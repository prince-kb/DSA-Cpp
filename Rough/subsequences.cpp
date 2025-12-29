#include<bits/stdc++.h>
using namespace std;

void substring(int i,string s,string a,vector<string> &v){
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            v.push_back(s.substr(i,j-i+1));
        }
    }
}

int main(){
    string s;
    getline(cin,s);

    vector<string> v;
    substring(0,s,"",v);

    for(string s : v)
        cout<<s<<" ";
}