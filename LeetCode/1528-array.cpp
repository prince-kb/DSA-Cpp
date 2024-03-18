#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int>a={4,5,6,7,0,2,1,3};
    string s = "codeleet";
    string p = "";
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(a[j]==i){
                p.push_back(s[j]);
            }
        }
    }
    cout<<p<<endl;
    
    printArray(a);
}