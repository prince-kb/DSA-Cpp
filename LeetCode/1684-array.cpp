// 1684. Count the Number of Consistent Strings

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<string>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    vector<string>a={"ad","bd","aaab","baa","badab"};
    string allowed = "ab";
    int n=0;
    map<char,bool>m;
    for(auto i : allowed){
        m[i]=true;
    }

    for(auto i : a){
        bool p = true;
        for(auto j : i){
            if(m[j]!=true){
                p=false;
                break;
            }
        }
            if(p==true){
                n++;
            }
    }
cout<<"Healthy strings are : "<<n<<endl;
    
}