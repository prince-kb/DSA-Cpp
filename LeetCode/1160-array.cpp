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
    // vector<int>a={1,3,2,4,6};
    string s = "Hello";
    cout<<s.find("l")<<endl;
    cout<<s.find('s')<<endl;
    // printArray(a);
}