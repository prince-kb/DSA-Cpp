//Reversal of an array
/* 
#include<iostream>
#include<vector>
using namespace std;
void print(vector <int> arr){
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
vector <int> arr;
cout<< "Enter the elements of the vector" << endl;
    int a;
    while(1){
        if(a==-1)
        break;
        cin>>a;
        arr.push_back(a);
    }
print(arr);
int s=0,e=arr.size()-1;
while(s<=e){
    swap(arr[s],arr[e]);
    s++,e--;
}
cout<<"After reversing"<<endl;
print (arr);
} */

//Merge two sorted arrays //Not completed
/* 
#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    }
void pass(int arr[],int c,int b,int a){
    for(int i=a;i>b;i--){
        arr[i]=arr[i-1];
    }
    arr[b]=c;
}
void merge(int a1[],int a,int a2[],int b){
    int i=0,j=0;
    while(i<a){
        if(a1[i]<a2[j])
            i++;

        else pass(a1,a2[j++],i++,a);
    }
    if(j<b)
        while(j<b){
        a1[i++]=a2[j++];
        }
}
int main(){
    int arr1[]={1,2,4,7,0,0,0,0,0};
    int arr2[]={3,5,6,9,10};
    int a=9,b=5;
    print(arr1,a);
    print(arr2,b);
    merge(arr1,a,arr2,b);
    cout<<"After merging: "<<endl;
    print(arr1,a);
} */

//Move Zeroes to right
/* 
#include<iostream>
using namespace std;

void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void pass(int arr[],int n,int a){
    int i;
    for(i=a;i<n-1;i++)
    arr[i]=arr[i+1];
    // cout<<a<<endl;
    arr[n-1]=0;
}
void zero(int arr[],int n){
    for (int i = 0; i < n; i++){
        if (arr[i]==0)
            pass(arr,n,i); 
            if(arr[i-1]==0 && i!=0)
            pass(arr,n,i-1);
            // print(arr,n);   
    }
}

int main(){
    int arr[]={1,3,0,2,4,0,0,8,0,9};
    int a=10;
    print(arr,a);
    zero(arr,a);
    cout<<"After changing:"<<endl;
    print(arr,a);

}
 */

//OR
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void zero(int arr[],int n){
    int j=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}}
int main(){
    int arr[]={1,0,0,0,4,2,55,6,0};
    print(arr,9);
    zero(arr,9);
    print(arr,9);
} */

//Rotate array
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void rotate(int arr[],int n,int k){
    int arr1[20],j=0;
    for(int i=0;i<k;i++){
        arr1[j++]=arr[n-k+i];
    }
    // print(arr1,k);
    for(int i=0;i<n-k;i++)
    arr[n-1-i]=arr[n-k-i-1];
    // print(arr,n);
    j=0;
    for (int i = 0; i < k; i++)
        arr[i]=arr1[j++];
    // print(arr,n);
    
}
int main(){
    int arr[50]={2,4,5,1,11,3,56},k;
    cout<<"Enter k value for rotation: ";
    cin>>k;
    int n=7;
    print(arr,n);
    rotate(arr,n,k);
    print(arr,n);
} */

//2nd process
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void rotate(int arr[],int n,int k){
    int temp[20];
    for (int i = 0; i < n; i++)
        temp[(i+k)%n]=arr[i];
    // print(temp,n);
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
}

int main(){
    int arr[]={2,4,1,5,3,7,9,8},k;
    int n=8;
    cout<<"Enter k value for rotation: ";
    cin>>k;
    print(arr,n);
    rotate(arr,n,k);
    print(arr,n);
}
 */
//Check if array is sorted and rotated
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int rotate(int arr[],int temp[],int n,int k){
    for (int i = 0; i < n; i++)
        temp[(i+k)%n]=arr[i];
    // print(temp,n);
    int z=0;
    for(int i=1;i<n;i++){
        if(temp[i]<temp[i-1]){
            z=1;
            break;
        }
    }
    return z;
}

int checksa(int arr[],int temp[],int n){
    bool z;
    int i,x;
    for(i=1;i<n;i++){
        // cout<<;
        x=rotate(arr,temp,n,i);
        if (x==0)
            return i;
         }
        return 0;
}
int main(){
    int arr[20]={6,7,8,9,11,2,3,4,5},temp[20],n;
    n=9;
    print(arr,n);
    cout<<"Array is rotated about "<<checksa(arr,temp,n);
    cout<<endl;
}
 */

//2nd Process
/* 
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int checksa(int arr[],int a){
    int n;
    for(int i=0;i<a-1;i++)
    if(arr[i]>arr[i+1])
    n+=1;
    if(arr[a-1]>arr[0])
    n+=1;
    return n<=1;
}

int main(){
    int arr[20]={6,7,8,9,11,3,4,5},temp[20],n;
    n=8;
    print(arr,n);
    cout<<"Array is rotated-"<<checksa(arr,n);
}
 */

#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

vector<int> sum_of_array(int arr1[],int a1,int arr2[],int a2,vector<int>&arr){
    int i=a1-1,j=a2-1,carry=0;
    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        // cout<<sum<<carry;
        arr.push_back(sum);
        i--,j--;
    }
    for(i;i>=0;i--){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
    }
    for(j;j>=0;j--){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr.push_back(sum);
    }
    if(carry!=0)
    arr.push_back(carry);
    return arr;
}

void printv(vector<int>arr){
    cout<<endl;
    // cout<<arr.size();
    for(int i=arr.size()-1;i>=0;i--)
        cout<<arr[i];
    cout<<endl;
}
int main(){
    int arr1[]={1,3,5},arr2[]={1,8,3,6};
    vector<int>arr;
    int a1=3,a2=4;
    sum_of_array(arr1,a1,arr2,a2,arr);
    printv(arr);
}