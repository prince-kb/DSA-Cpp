#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<string>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void subsets(string s,int i,string k,vector<string>&a){
    a.push_back(k);
    for(int j=i;j<s.size();j++){
        k+=s[j];
        subsets(s,i+1,k,a);
        k=k.substr(0,k.size()-1);
    }
}

int main(){
    vector<string>a;
    string s="abcd";

    subsets(s,0,"",a);

    printArray(a);
}