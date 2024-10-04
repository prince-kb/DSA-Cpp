#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n=5;
    while(n>0){
        int x;
        cin>>x;
        v.push_back(x);
        n--;
    }

    long long int sum=0;
    for(int i : v)
        sum+=i;
    int ans=0;
    n=1;
    while(n<v.size()){
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++){
            left+=v[i];
        }
        right=sum-left;
        
        if(left==right) ans++;

        n++;
    }
    cout<<ans<<endl;
    return 0;
}