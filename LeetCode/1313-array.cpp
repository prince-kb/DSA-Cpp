// 1313. Decompress Run-Length Encoded List


/* 
Example 1:
Input: nums = [1,2,3,4]
Output: [2,4,4,4]
Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
At the end the concatenation [2] + [4,4,4] is [2,4,4,4].


Example 2:
Input: nums = [1,1,2,3]
Output: [1,3,3]
 
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
    vector<int>a={1,1,2,3};
    vector<int>soln;
    
    for(int i=0;i<a.size()/2;i++){
        for(int j=0;j<a[2*i];j++){
            soln.push_back(a[2*i+1]);
        }
    }

    printArray(soln);
}