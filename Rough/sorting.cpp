#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void bubble_sort(int arr[],int n){
    cout<<"Bubble sorting: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
    }
}

void selection_sort(int arr[],int n){
    cout<<"Selection sorting: ";
    int i=0,j=0;
    for(i=0;i<n;i++){
        int a=i;
        for(j=0;j<n;j++){
            if(arr[a]<arr[j]){
                a=j;
            }
        swap(arr[a],arr[i]);
        }
    }

}

void insertion_sort(int arr[],int n){
    cout<<"Insertion sorting: ";
    int i=1,j,a=0;
    while(i<n){
        a=arr[i];
        j=i-1;
        while(j>=0 && (arr[j]>a)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=a;
        i+=1;
    }
}

int partition(int arr[],int l,int h){
    int i=l,j=h;
    int pivot=arr[l];
    while(i<j){
    do{
        i++;
    }while(arr[i]<=pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    
    if(i<j)
        swap(arr[i],arr[j]);
}

swap(arr[j],arr[l]);
return j;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int a=partition(arr,l,h);
            quicksort(arr,l,a);
            quicksort(arr,a+1,h);
    }
}
int main(){
int a,arr[20]={9,3,11,7,23,5,-11,6,4,-8,2,13,5,34,-90,-23};
int n=16;
cout<< "1>Bubble sort 2>Selection sort 3>Insertion sort 4>Quicksort: ";
cin>>a;
switch(a){
case 1: bubble_sort(arr,n);
        printArray(arr,n);
        break;

case 2: selection_sort(arr,n);
        printArray(arr,n);
        break;

case 3: insertion_sort(arr,n);
        printArray(arr,n);
        break;

case 4: 
        cout<<"Quicksorting: "<<endl;
        quicksort(arr,0,n-1);
        printArray(arr,n);
        break;

default: cout<<"Wrong input"<<endl;
}
}