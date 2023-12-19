#include<iostream>
using namespace std;
void in(int arr[][8],int m,int n){
cout<< "Enter the elements of the array" << endl;
for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
        cin>>arr[i][j];
    
}
void printMatrix(int arr[][8],int m,int n){
    cout<<endl;
    
    for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }    
    cout<<endl;
}

void print_wave(int arr[][8],int m,int n){
    cout<<endl;
    cout<<"Wave form"<<endl;
    for(int i=0;i<n;i++){
        if (i&1) //odd
            for(int j=m-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
            else for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
    }
    cout<<endl;
}

void print_spiral(int arr[][8],int m,int n){
int a=0,b=m-1,c=0,d=n-1;
int count=0;
cout<<endl;
cout<<"Spiral form"<<endl;
while(count<m*n){
    for(int i=a;i<=b;i++){
        cout<<arr[a][i]<<" ";
        count++;
        if(count%4==0)
        cout<<endl;
    }
    c++;

    for (int i=c;i<=d;i++)
    {
        cout<<arr[i][d]<<" ";
        count++;
        if(count%4==0)
        cout<<endl;
    }
    b--;

    for(int i=b;i>=a;i--){
        cout<<arr[d][i]<<" ";
        count++;
        if(count%4==0)
        cout<<endl;
    }
    d--;

    for(int i=d;i>=c;i--){
        cout<<arr[i][a]<<" ";
        count++;
        if(count%4==0)
        cout<<endl;
    }
    a++;
}
// cout<<endl<<count;
cout<<endl;
}
void rotate_90(int arr[][8],int arr1[][8] ,int m,int n){
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr1[i][n-j-1]=arr[j][i];
    }
}
cout<<"Rotated 90"<<endl;
printMatrix(arr1,m,n);
}

void binary_search(int arr[][8],int m,int n){
    int target;
    cout<<"Enter the element to search: ";
    cin>>target;
    int s=0,e=m*n-1;
    int mid=(s+e)/2;
    while(s<=e){
        int item=arr[mid%m][mid/m];
        if(item==target){
            cout<<"Element found at ["<<mid%m<<"]["<<mid/n<<"]"<<endl;
            break;
        }
        if (item<target)
            s=mid+1;
        else if (item>target)
            e=mid-1;
        }}

int main(){
// int arr[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
int arr[8][8]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
int m=4,n=4;
int arr1[8][8]={{1,3,4,7},{8,12,13,14},{18,20,22,29},{54,57,61,90}};
// cout<< "Enter the number of rows an columns of the array" << endl;
// cin>>m>>n;
// in(arr,m,n);
// 1>
printMatrix(arr1,m,n);

// 2>
// print_wave(arr,m,n);

// 3>
// print_spiral(arr,m,n);

// 4>Rotate 90 degree
// rotate_90(arr,arr1,m,n);

// 5>Binary search
binary_search(arr1,m,n);

}