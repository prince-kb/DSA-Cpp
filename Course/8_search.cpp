//Binary search
/* 
#include<iostream>
using namespace std;
int bsearch(int arr[],int a,int b){
    int start=0,end=a-1,mid;
    while(start <= end){
         mid=(start+end)/2;
        //mid=s+(e-s)/2;
        if(arr[mid]==b){
        return mid;
        }
        if(arr[mid]>b)
        end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
    int a,arr[50],key;
    cout<<"Enter number of elements of array:";
    cin>>a;
    cout<<"Enter the array in ascending order"<<endl;
    for(int i=0;i<a;i++)
    cin>>arr[i];
    cout<<"Enter the element to search:";
    cin>>key;
    int b=bsearch(arr,a,key);
    cout<<key<<" found at index "<<b;
} */

//First and last occurence using binary search
/* 
#include<iostream>
using namespace std;
int focc(int arr[],int a,int key){
    int s=0,e=a-1,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        s=mid+1;
        else e=mid-1;
    }
    return ans;
}
int locc(int arr[],int a,int key){
    int s=0,e=a-1,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        s=mid+1;
        else e=mid-1;
    }
    return ans;
}

int main(){
    int a,arr[50],key;
    cout<<"Enter the number of elements of array: ";
    cin>>a;
    for (int i = 0; i < a; i++)
        cin>>arr[i];
    cout<<"Enter key value: ";
    cin>>key;
    cout<<"The first and last occurence is at: "<<focc(arr,a,key)<<" "<<locc(arr,a,key)<<endl;
} */
//Count number of occurences
/* 
 #include<iostream>
using namespace std;
int focc(int arr[],int a,int key){
    int s=0,e=a-1,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        s=mid+1;
        else e=mid-1;
    }
    return ans;
}
int locc(int arr[],int a,int key){
    int s=0,e=a-1,mid,ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        s=mid+1;
        else e=mid-1;
    }
    return ans;
}

int main(){
    int a,arr[50],key;
    cout<<"Enter the number of elements of array: ";
    cin>>a;
    for (int i = 0; i < a; i++)
        cin>>arr[i];
    cout<<"Enter key value: ";
    cin>>key;
    cout<<"Number of occurence is: "<<locc(arr,a,key)-focc(arr,a,key)+1<<endl;
}  */
//Peak element
/*
#include<iostream>
using namespace std;
int peak(int arr[],int a){
int s=0,e=a-1,m;
while(s<e){
    m=s+(e-s)/2;
    if(arr[m]<arr[m+1])
        s=m+1;
    else e=m;
}
return s;
}
int main(){
    int a,arr[50];
    cout<<"Enter the number of elements of array: ";
    cin>>a;
    for (int i = 0; i < a; i++)
        cin>>arr[i];
    cout<<"Peak element is at : "<<peak(arr,a)<<endl;
}  
*/
//Pivot element
/*
#include<iostream>
using namespace std;
int pivot(int arr[],int a){
    int s=0,e=a-1,m;
    m=(s+e)/2;
    while(s<e){
        if(arr[m]>arr[0]){
        s=m+1;
        }
        else {e=m;}
        m=(s+e)/2;
    }
    return s;
}
int main(){
int a,arr[50];
cout<< "Enter the number of elements of the array: ";
cin>>a;
for(int i=0;i<a;i++)
cin>>arr[i];
cout<<"Pivot element is :"<<pivot(arr,a);
}
*/

//Searching in a rotated array
 /* 
#include<iostream>
using namespace std;
int pivot(int arr[],int a){
    int s=0,e=a-1,m;
    m=(s+e)/2;
    while(s<e){
        if(arr[m]>arr[0]){
        s=m+1;
        }
        else {e=m;}
        m=(s+e)/2;
    }
    return s;
}
int bsearch(int arr[],int start,int a,int key){
    int end=a-1,mid;
    while(start <= end){
         mid=(start+end)/2;
        //mid=s+(e-s)/2;
        if(arr[mid]==key){
        return mid;
        }
        if(arr[mid]>key)
        end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
int a,key,arr[50];
cout<< "Enter number of elements of array: " ;
cin>>a;
for(int i=0;i<a;i++)
cin>>arr[i];
int p;
p=pivot(arr,a);
cout<<"Index of pivot element is "<<p;
cout<<"Enter the key to search: ";
cin>>key;
if(arr[p]>key && arr[a-1]<key){
    bsearch(arr,p,a,key);
}
else bsearch(arr,0,p-1,key);
} */
//Square root
#include<iostream>
using namespace std;
int main(){
int n,ans;
cout<< "Enter the number you want to find the square root of :" ;
cin>>n;
int s=0,e=n,m;
long long int l;
while(s<=e){
    m=(e+s)/2;
    if(l>n)
    e=m-1;
    else {
        ans=m;
        s=m+1;
    }
}
printf("Answer=%d",ans);
}
