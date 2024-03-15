// 2574. Left and Right Sum Differences
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

void pusher1(vector<int> a,vector<int> &b,int n,int x){
    
    if(n==a.size()){
        return;
    }
    b.push_back(x);
    x=x+a[n];
    pusher1(a,b,n+1,x);
}
void pusher2(vector<int> a,vector<int> &b,int n,int x){
    if(n==-1){
        return;
    }
    pusher2(a,b,n-1,x+a[n]);
    b.push_back(x);
}

int main(){
    vector<int>a={10,4,8,3};
    vector<int>b,c,ans;

    pusher1(a,b,0,0);
    pusher2(a,c,a.size()-1,0);
    
    for(int i=0;i<b.size();i++){
        int x = b[i]-c[i];
        if(x<0){
            x*=-1;
        }
        a[i]=x;
    }
    
    
    printArray(a);
    printArray(b);
    printArray(c);
}