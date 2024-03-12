//Concatenation of Array

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>a){
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}

int main(){
    vector<int>a={2,3,44,5,3};

    //vector.size() should not be used to allocate or push_back something in runtime as the space increases dynamically and loop cannot be stopped
    int n = a.size();
    for(int i=0;i<n;i++){
        a.push_back(a[i]);   
    }
    printArray(a);
}