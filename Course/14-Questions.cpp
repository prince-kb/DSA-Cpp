//Sieve of eratothenes
// Count prime numbers before a given number


//It's time complexity is minimum
/* #include<iostream>
#include<vector>
using namespace std;
int main(){
int a,count=0;
cout<< "Enter the number: ";
cin>>a;
vector <bool> arr(500000,1);
arr[0]=arr[1]=false;
for(int i=2;i<a;i++){
    if(arr[i]==true)
    count++;

    for(int j=2*i;j<a;j=j+i){
        arr[j]=false;
    }
}
cout<<"Number of prime numbers are: "<<count<<endl;
// cout<<arr[0]<<arr[1]<<endl;
} */

//(x^m)%n
// Modular Exponentiation

#include<iostream>
using namespace std;
int main(){
int x,n,m,result=1;
cout<< "Enter the values of x,m and n: ";
cin>>x>>n>>m;
while(n>0){
    if(x&1){
        result=(result*(x)%m)%m;
    }
    x=((x)%m*(x)%m)%m;
    n>>=1;
}
cout<<x<<"^"<<m<<"%"<<n<<"= "<<result;
}