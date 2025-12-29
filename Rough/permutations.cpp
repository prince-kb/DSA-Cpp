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


void permutationUsingRecursion(string s,int i, vector<string> &v){
    if(i==s.size()-1) v.push_back(s);
    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        permutationUsingRecursion(s,i+1,v);
        swap(s[i],s[j]);
    }
}

int main(){
    string s ="abcd";
    vector<string> v;
    permutationUsingRecursion(s,0,v);
    printArray(v);
}