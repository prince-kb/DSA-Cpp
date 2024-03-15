// 2859. Sum of Values at Indices With K Set Bits
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
    vector<int>a={1,3,2,4,6};
    // int k=0;
    vector<int> b;

    //Stored no. of set bits in a second array
    for(int i=0;i<a.size();i++){
        int k=0,n=a[i];
        while(n>0){
            if(n&1){
                k++;
            }
            n=n>>1;
        }
        b.push_back(k);
    }

    //Do next that if k==target , sum+=a[i]
    printArray(a);
    printArray(b);
}