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

void arrange(string s,int i,vector<string>& a){
    if(i==s.size()-1) a.push_back(s);
    for(int j=i;j<s.size();j++){
        swap(s[j],s[i]);
        arrange(s,i+1,a);
        swap(s[j],s[i]);
    }
}

int main(){
    vector<string> a;
    string s="ABCD";

    arrange(s,0,a);

    
    printArray(a);
}