#include<stdio.h>
#include<stdlib.h>
/* 
void toh(int n,char a,char b,char c){
    if(n==1){
        printf("Move disk %d from %c to %c\n",n,a,c);
        return;
    }
    else{
        toh(n-1,a,c,b);
        printf("Move disk %d from %c to %c\n",n,a,c);
        toh(n-1,b,a,c);
    }
}
int main(){
    toh(6,'A','B','C');
}
 */

#define MAX 6
#define TRUE 1
/* 
int arr[MAX],front=-1,rear=-1;
void push(){
    if(front==0&&rear==MAX-1 || front==rear+1){
        printf("CIRCULAR QUEUE OVERFLOW\n");
        return;
    }
    else {
        if(front==-1)
            front=0;
        rear=(rear+1)%MAX;
        int item;
        // printf("%d",rear);
        printf("Enter element to push:");
        scanf("%d",&item);
        arr[rear]=item;
}}

void pop(){
    if(front==-1){
        printf("CIRCULAR QUEUE UNDERFLOW\n");
        return;
    }
    else {
        printf("%d popped\n",arr[front]);
        if(front==rear)
        front=-1,rear=-1;
        else front=(front+1)%MAX;
    }}
void peep(){
    int i;
    if(front==-1){
        printf("No items present\n");
        return;
    }
    for(i=rear;i!=front;i=(i-1)%MAX)
        printf("%d\n",arr[i]);
        printf("%d\n",arr[i]);
}
int main(){
    int a;
    printf("\n\tCIRCULAR QUEUE MENU\n");
    printf("1>PUSH 2>POP 3>PEEP Any other key>EXIT\n");
while(TRUE){    
    printf("Enter your choice: ");
    scanf("%d",&a);
    switch(a){
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peep();
        break;
        default:printf("EXITTING>>>\n");
            exit(0);
    }
}
} */

void printArray(int arr[],int n){
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=1;j<n;j++)
            if(arr[j-1]>arr[j])
                swap(&arr[j-1],&arr[j]);
    }

void selection_sort(int arr[],int n){
    int k;
    for(int i=0;i<n;i++){
        k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[k])
                k=j;
        }
        swap(&arr[k],&arr[i]);
    }}

void insertion_sort(int arr[],int n){
    int i=1,j=n-1,k;
    while(i<n){
        k=arr[i],j=i-1;
        while(k<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
        i++;
    }
}
int partition(int arr[],int l,int h){
    int i=l,j=h;
    while(i<j){
        do{i++;}
        while(arr[i]<arr[l]);
        do{j--;}
        while(arr[j]>arr[l]);
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
            swap(&arr[l],&arr[j]);
        }
        return j;
}
void quick_sort(int arr[],int l,int h){
    if(l<h){
    int p=partition(arr,l,h);
    quick_sort(arr,l,p);
    quick_sort(arr,p+1,h);
    }}
void merge(int arr[],int l,int m,int h){
    int n1=m-l+1,n2=h-m;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++)
        arr1[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        arr2[i]=arr[m+i+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
            arr[k++]=arr1[i++];
        else arr[k++]=arr2[j++];
    }
    while(i<n1)
        arr[k++]=arr1[i++];
    while(j<n2)
        arr[k++]=arr2[j++];
}
void merge_sort(int arr[],int l,int h){
    if(l<h){
        int m=(l+h)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}


void main(){
    int arr[]={2,3,5,1,6,4,8,6,9,0,-2,1,45,6},n=14,a=9;
    printArray(arr,n);
    // bubble_sort(arr,n);
    // selection_sort(arr,n);
    // insertion_sort(arr,n);
    // quick_sort(arr,0,n);
    merge_sort(arr,0,n);
    printf("After sorting: \n");
    printArray(arr,n);
}