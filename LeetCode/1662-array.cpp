
// 1662. Check If Two String Arrays are Equivalent
/* 
Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
 */


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


    vector<string> word1 = {"a","cb"};
    vector<string> word2 = {"ab", "c"};

    string s1,s2;
    for(int i=0;i<word1.size();i++){
        for(int j=0;j<word1[i].size();j++){
            s1.push_back(word1[i][j]);
        }
    }
    for(int i=0;i<word2.size();i++){
        for(int j=0;j<word2[i].size();j++){
            s2.push_back(word2[i][j]);
        }
    }
    cout<<s1<<" "<<s2<<endl;
    // cout<<s1.compare(s2);
    
}