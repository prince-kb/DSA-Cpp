#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void printArray(vector<vector<int>>a){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-1-i;j++)
            cout<<" ";
        for(int j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void pascal1(int n, vector<vector<int>>&v){
    for(int i=0;i<=n;i++){
        vector<int> a;
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1) a.push_back(1);
            else a.push_back(v[i-1][j-1]+v[i-1][j]);
        }
        v.push_back(a);
    }
}


int main(){
    vector<vector<int>>v;
    int n=0;
    cout<<"Enter a number : ";
    cin>>n;

    pascal1(n,v);

    printArray(v);
}