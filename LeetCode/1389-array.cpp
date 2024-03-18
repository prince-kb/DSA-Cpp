// 1389. Create Target Array in the Given Order

/* Example 1:

Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
Output: [0,4,1,3,2]
Explanation:
nums       index     target
0            0        [0]
1            1        [0,1]
2            2        [0,1,2]
3            2        [0,1,3,2]
4            1        [0,4,1,3,2]
Example 2:

Input: nums = [1,2,3,4,0], index = [0,1,2,3,0]
Output: [0,1,2,3,4]
Explanation:
nums       index     target
1            0        [1]
2            1        [1,2]
3            2        [1,2,3]
4            3        [1,2,3,4]
0            0        [0,1,2,3,4]
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

    vector<int>nums = {4,2,4,3,2};
    vector<int> index = {0,0,1,3,1};
    vector<int> soln;
    //soln = {2,2,4,4,3}
    

    // Approach1
    //Gave wrong answer in above condition 

/* 
    int indexSize = nums.size()-1;
    int numsSize = index.size()-1;

    int x = 0;

    for(int i = indexSize;i>=0;i--,x++){
        // cout<<nums[i]<<" "<<index[i]<<endl;
        for(int j = indexSize;j>=0;j--){
            if(index[j]==x){
                soln.push_back(nums[j]);
            }
        }
    }
 */

    //Approach2
    for(int i=0;i<index.size();i++){
        soln.insert(soln.begin()+index[i],nums[i]);
    }
    printArray(soln);
}