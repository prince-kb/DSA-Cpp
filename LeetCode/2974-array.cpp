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
    vector<int>a={5,4,2,3};
    sort(a.begin(),a.end());
    printArray(a);
    for(int i=0;i<a.size();i=i+2){
        swap(a[i],a[i+1]);
    }
    printArray(a);
    
}