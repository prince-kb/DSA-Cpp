// 2913. Subarrays Distinct Element Sum of Squares I

#include<iostream>
#include<vector>
#include<set>
#include <bits/stdc++.h>
using namespace std;

void printArray(set<int>a){
    cout<<endl;
    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;
}

//Process I - O(n^3)
/*
int main(){
    vector<int>a={1,1};
    int sum = 0;
    for(int i=1;i<=a.size();i++){
        for(int j=0;j<a.size();j++){
            if(i+j<=a.size()){
            set <int> x;
            for(int k=j;k<(i+j);k++){
                x.insert(a[k]);
            }
            sum += (x.size())*(x.size());
            printArray(x);
            }
        }
    }
    cout<< "SUM = "<<sum<<endl;
}

*/
//Process II - O(n^2)

int main(){
    vector<int>a={1,2,1};
    int sum = 0;
    for(int i=0;i<a.size();i++){
        set <int> s;
        for(int j=i;j<a.size();j++){
            s.insert(a[j]);
            sum += s.size()*s.size();
            printArray(s);
        }
    }
    cout<<"Sum = "<<sum<<endl;
}