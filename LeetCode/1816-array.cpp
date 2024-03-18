#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

/* Input: s = "Hello how are you Contestant", k = 4
Output: "Hello how are you"
Explanation:
The words in s are ["Hello", "how" "are", "you", "Contestant"].
The first 4 words are ["Hello", "how", "are", "you"].
Hence, you should return "Hello how are you". */

void printArray(vector<int>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    vector<int>a={1,3,2,4,6};
    string s = "Hello how are you Contestant";
    string p = "";
    int k=4;
    int i=0;
    int n = 0;
    while(i<s.size()-1 && n<k){
        if(s[i]==' '){
            n++;
            if(n==k)
                break;
        }
        p.push_back(s[i]);
        i++;
    }
    // printArray(a);
    cout<<p<<endl;
}