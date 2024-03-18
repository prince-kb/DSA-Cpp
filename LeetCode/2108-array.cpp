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
    vector<string> words={"xngla","e","itrn","y","s","pfp","rfd"};
    // int i=2;
    for(int i=0;i<words.size();i++){
        if(words[i].size()==1){
            cout<<words[i];
        }
                int k=0;
            for(int j=0;j<=words[i].size()/2;j++){
                if(words[i][j]!=words[i][words[i].size()-1-j]){
                    break;
                }
                else {
                    k++;
                }
                if(k==(words[i].size())/2){
                    cout<< endl<<words[i];
                }
            }
        }
        cout<<endl<<"None";
    // printArray(a);
}