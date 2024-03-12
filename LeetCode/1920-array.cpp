#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
vector<int>a={0,2,1,5,3,4};
vector<int> b;
    printArray(a);
    for(int i=0;i<a.size();i++)
        b.push_back(a[a[i]]);
    printArray(b);
}