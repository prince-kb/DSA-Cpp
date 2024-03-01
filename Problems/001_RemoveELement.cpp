#include<iostream>
using namespace std;

int times (int arr[],int arr1[],int n,int target){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            arr1[k++]=arr[i];
        }
    }
    return k;
}
int main(){
    int arr[]={2,3,3,2,2,2,3,4,2};
    int arr1[10];
    int n=9;
    int target=3;
    int p=times(arr,arr1,n,target);
    cout<<p<<endl;
    for(int i=0;i<p;i++){
        cout<<arr1[i]<<" ";
    }
}