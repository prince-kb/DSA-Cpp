#include<iostream>
#include<vector>
using namespace std;

int equi(vector<int> nums){
    long long int sum=0;
    for(int i : nums)
        sum+=i;
    int i=0;
    while(i<nums.size()){
        int left=0,right=0;
        for(int j=0;j<i;j++)
            left+=nums[j];
        for(int j=i+1;j<nums.size();j++)
            right+=nums[j];
        if(left==right) return i;
        i++;
    }
    return -1;
}

int main(){
    vector<int> nums;
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Enter elements :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<endl<<equi(nums);
    return 0;
}

