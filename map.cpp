#include<iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h>
using namespace std;

void printArray(map<int,int>a){
    cout<<endl;
    for(auto i : a)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;
}

int main(){
    map<int,int> m;
    vector<int> arr = {7,2};
    for(int i=0;i<arr.size();i++)
        m[arr[i]]++;
    
    map<int,int> m1;
    for(auto i : m){
        m1[i.second]++;
    }
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<" "<<endl;;
    }
    printArray(m);
    printArray(m1);
    for(auto i : m1){
        if(i.second>1){
            cout<<"false";
            return 0;
        }
    }
        cout<<"true";
}