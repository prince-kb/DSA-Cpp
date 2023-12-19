//Max and Min of an array
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";
    
}
int maxi(int arr[],int a){
    int maxxi = arr[0];
    for (int i = 0; i < a; i++)
        maxxi = max(maxxi,arr[i]);
    return maxxi;
}
int mini(int arr[],int a){
    int minni = arr[0];
    for (int i = 0; i < a; i++)
        minni = min(minni,arr[i]);
    return minni;
}
int main(){
int a,arr[25];
cout<< "Enter the size of array: " << endl;
cin>>a;
cout<<"Enter the elements: ";
    for (int i = 0; i < a; i++)
        cin>>arr[i];
printArray(arr,a);
cout<<endl<<"Max="<<maxi(arr,a)<<endl;
cout<<"Min="<<mini(arr,a);
}
*/
//Reverse of an array
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";   
}
void reverse(int arr[],int a){
int start=0,end=a-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++,end--;
}}
int main(){
int a,arr[25];
cout<< "Enter number of elements of the array: "     << endl;
cin>>a;
cout<<"Enter the elements of the array: ";
for(int i=0;i<a;i++)
    cin>>arr[i];
cout<<"Before reversing: ";
printArray(arr,a);
reverse(arr,a);
cout<<endl;
cout<<"After reversing: ";
printArray(arr,a);
}
*/
//Reverse with the next element
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";   
}
void reverse(int arr[],int a){
int start=0;
while(start<a-1){
    if(start+1<a)
    swap(arr[start],arr[start+1]);
    start+=2;
}}
int main(){
int a,arr[25];
cout<< "Enter number of elements of the array: "     << endl;
cin>>a;
cout<<"Enter the elements of the array: ";
for(int i=0;i<a;i++)
    cin>>arr[i];
cout<<"Before reversing: ";
printArray(arr,a);
reverse(arr,a);
cout<<endl;
cout<<"After reversing: ";
printArray(arr,a);
}
*/
//Unique element in an array{1,2,4,2,3,4,3}==>Unique=1
//1st process
/*
#include<iostream>
using namespace std;
int main(){
int arr[25]={1,2,3,4,5,6,5,4,3,2,1};
for (int i = 0; i < 11; i++){
    int b=0;
    for (int j = 0; j < 11; j++){
        if (arr[i]==arr[j])
            b++;
    }
    if (b==1)
        cout<<"Unique element="<<arr[i];
}
}
*/
//2nd process
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    cout<<endl;
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}
int main(){
int a;
cout<< "Enter the number of cases: ";
cin>>a;
for(int i=0;i<a;i++){
    int b,arr[25];
    cout<<endl<<"case "<<i<<endl;
    cout<<"Enter the number of elements of array: ";
    cin>>b;
    cout<<"Enter the elements: ";
    for(int j=0;j<b;j++)
    cin>>arr[j];
    printArray(arr,b);
    int x=0;
    for(int j=0;j<b;j++){
        x=x^arr[j];
    }
    cout<<"The unique element is "<<x;
    
}
}
*/
//Intersection of two arrays
/*
#include<iostream>
using namespace std;
void infunc(int arr[],int a){
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < a; i++)
        cin>>arr[i];
}
void printArray(int arr[],int a){
    cout<<endl;
    for(int i=0;i<a;i++)
cout<<arr[i]<<" ";
}
int main(){
int a,b,arr2[25],arr1[25];
cout<< "Enter the number of elements of array1: ";
cin>>a;
infunc(arr1,a);
cout<< "Enter the number of elements of array2: " << endl;
cin>>b;
infunc(arr2,b);
printArray(arr1,a);
printArray(arr2,b);
int start1=0;
int start2=0;
cout<<"Intersection of arrays are: ";
while(start1<a && start2<b){
    if (arr1[start1]==arr2[start2]){
        cout<<arr1[start1]<<" ";
        arr2[start2]=INT_MIN;
        start1++,start2++;
    }
    else if(arr1[start1]<arr2[start2]){
        start1++;
    }
    else start2++;
}
}
*/

//Duplicate element
/*
#include<iostream>
using namespace std;
int k=0;
void printArray(int arr[],int a){
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";   
}
void dupli(int arr[],int dup[],int a){
for (int i = 0; i < a; i++){
    for (int j = 0; j < a; j++){
        if (i==j)
            continue;
        if(arr[i]==arr[j]){
            dup[k]=arr[i];
            k++;
        }}}}
        
int main(){
int a,arr[25],dup[5];
cout<< "Enter number of elements of the array: "     << endl;
cin>>a;
cout<<"Enter the elements of the array: ";
for(int i=0;i<a;i++)
    cin>>arr[i];
printArray(arr,a);
dupli(arr,dup,a);
cout<<endl;
if (k>=1){
    cout<<"Duplicate pairs found are: ";
    for (int i = 0; i < k; i++)
        cout<<dup[i]<<" ";
}
else cout<<"No duplicate elements found";
}
*/

//Sum of elements of array
/*
#include<iostream>
using namespace std;
int main(){
int a,arr[25];
cout<< "Enter number of elements of array: " << endl;
cin>>a;
cout<<"Enter the elements of the array: ";
for (int i = 0; i < a; i++)
    cin>>arr[i];
int sum=0;
for (int i = 0; i < a; i++)
    sum=sum+arr[i];
cout<<"Sum of elements="<<sum;
}
*/
//Swap 0 with 1
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int a){
    for (int i = 0; i < a; i++)
        cout<<arr[i]<<" ";
}
int main(){
int a,arr[25];
cout<< "Enter number of elements of the array" << endl;
cin>>a;
cout<< "Enter elements of the array" << endl;
for (int i = 0; i < a; i++)
    cin>>arr[i];
    printArray(arr,a);
for (int i = 0; i < a; i++){
    if (arr[i]==0){
        for (int j = 0; j < a; j++){
            if (arr[j]==1)
                swap(arr[i],arr[j]);
                break;
        }}}
        cout<<endl;
        printArray(arr,a);
}
*/
//Normal functions of an array
/*
#include<iostream>
using namespace std;
void in(int arr[],int n){
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
}
void printArray(int arr[],int n){
    cout<<"The elements are: ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main(){
int n,arr[25];
cout<< "Enter the number of elements of the array" << endl;
cin>>n;
in(arr,n);
printArray(arr,n);

}
*/
//Sorting 0's and 1's
/*
#include<iostream>
using namespace std;
void ins(int arr[],int a){
    cout<<"Enter the elements of array as 0's and 1's: ";
    for(int i=0;i<a;i++)
    cin>>arr[i];
}
void printArray(int arr[],int a){
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<a;i++)
    cout<<arr[i]<<" ";
}
void sort01(int arr[],int a){
    int start=0,end=a-1;
    while(start<=end){
        if (arr[start]==1 && arr[end]==0){
            swap(arr[start],arr[end]);
            start++,end--;
        }
        else if(arr[end]!=0)
        end--;
        else start++;
    }
}
int main(){
int a,arr[100];
cout<< "Enter number of elements:" << endl;
cin>>a;
ins(arr,a);
printArray(arr,a);
sort01(arr,a);
printArray(arr,a);
}
*/
// sort 0 1 and 2
/*
#include<iostream>
using namespace std;
void ins(int arr[],int a){
    cout<<"Enter the elements of array as 0's and 1's: ";
    for(int i=0;i<a;i++)
    cin>>arr[i];
}
void printArray(int arr[],int a){
    cout<<"\nThe elements of the array are: "<<endl;
    for(int i=0;i<a;i++)
    cout<<arr[i]<<" ";
}
void sort012(int arr[],int a){
    int start=0,end=a-1;
    while(start<=end){
        if (arr[start]==1 && arr[end]==0 || arr[start]==2 && arr[end]==0){
            swap(arr[start],arr[end]);
            start++,end--;
        }
        else if(arr[end]!=0)
        end--;
        else start++;
    }
    start=0,end=a-1;
    while(start<=end){
        if (arr[start]==2 && arr[end]==1){
            swap(arr[start],arr[end]);
            start++,end--;
        }
        else if(arr[end]!=1)
        end--;
        else start++;
    }

}
int main(){
int a,arr[100];
cout<< "Enter number of elements: " << endl;
cin>>a;
ins(arr,a);
printArray(arr,a);
sort012(arr,a);
printArray(arr,a);
}
*/
//Binomial coefficient table
/* 
#include<iostream>
using namespace std;
int main(){
int a,arr[20][20];
cout<< "Enter number of rows" << endl;
cin>>a;
for (int i = 1; i <= a; i++){
    for (int j = 1; j <= i; j++){
        if (j==1 || i==j)
        {
            arr[i][j]=1;
        }
        else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        cout<<arr[i][j]<<" ";
        
    }
        cout<<endl;
    
}

} */
//Pair sum
/*
#include<iostream>
using namespace std;
int main(){
int a,key,arr[50];
cout<< "Enter the number of elements of the array: ";
cin>>a;
for (int i = 0; i < a; i++)
    cin>>arr[i];
    cout<<"Enter the sum to find: ";
    cin>>key;
    cout<<"Elements are :";
for (int i = 0; i < a; i++){
    for (int j = i+1; j < a; j++){
        if (arr[i]+arr[j]==key)
            cout<<arr[i]<<" "<<arr[j]<<endl;
    }
}
}
*/
//Triplet sum
/* 
#include<iostream>
using namespace std;
int main(){
int a,key,arr[50];
cout<< "Enter the number of elements of the array: ";
cin>>a;
for (int i = 0; i < a; i++)
    cin>>arr[i];
    cout<<"Enter the sum to find: ";
    cin>>key;
    cout<<"Elements are :";
for (int i = 0; i < a; i++){
    for (int j = i+1; j < a; j++){
        for(int k=j+1;k<a;k++){
        if (arr[i]+arr[j]+arr[k]==key)
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    }
    }
}
}   */