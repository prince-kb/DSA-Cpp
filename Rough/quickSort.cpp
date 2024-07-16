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

int partition(vector<int> &a,int l,int r){
    int i=l,j=r;
    int pivot=a[l];
    int n=0;
    while(i<j){
        if(a[i+1]<=pivot) n++;
        i++;
    }
    int pivotIndex = l+n;
    swap(a[l],a[pivotIndex]);
    
    i=l;
    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<pivotIndex && j>pivotIndex) swap(a[i++],a[j--]);
    }
    return pivotIndex;
}

void quickSort(vector<int> &a,int l,int r){
    if(l>=r) return ;
    int p = partition(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r);
}

int main(){
    vector<int>a={1,3,2,4,6,9,-7,8,-4,90};
    printArray(a);

    quickSort(a,0,a.size()-1);
    printArray(a);
    
}