// 1637. Widest Vertical Area Between Two Points Containing No Points

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>>a){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    cout<<endl;
}
}

int main(){
    vector<vector<int>>a={{8,7},{9,9},{7,4},{9,7}}; 
    // vector<vector<int>>a={{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}}; 
    sort(a.begin(),a.end());
    printArray(a);
    int x=0;
    for(int i=0;i<a.size()-1;i++){
            int p=a[i+1][0]-a[i][0];
            if(p>x){
                x=p;
            }
    }
    cout<<x;
}
