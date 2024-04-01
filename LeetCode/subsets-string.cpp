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

//Using recursion
void subsets(string p,vector<string> &subs,string a,int n){
    if(n>=p.size()){
        subs.push_back(a);
        return;
    }
    subsets(p,subs,a,n+1);
    a.push_back(p[n]);
    subsets(p,subs,a,n+1);
}

int main(){
    vector<int>a={1,3,2,4,6};
    string p = "drives";
    vector<string> subs;
    // subsets(p,subs,"",0);

    //Using iteration
    for(int i=0;i<p.size();i++){
        string x = "";
        for(int j=0;j<i;j++){
            x.push_back(p[j]);
        }
        subs.push_back(x);
    }
    cout<< ~(5)<<endl;
    printArray(subs);
}