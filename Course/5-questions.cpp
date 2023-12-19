#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Prime
    /*
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    bool prime = true;
    for (int i = 2; i < a-1; i++){
        if (a%i==0){
            prime=0;
            break;
        } }
    if (prime)
        cout<<"Given number is prime";
    else cout<<"Given number is not prime";
    */
   //Reverse of an integer 
   /*
   int a;
   cout<<"Enter the number: ";
   cin>>a;
   while(a!=0){
    int b=a%10;
    a=a/10;
    cout<<b;
   }
   */
  //Binary of a number-1st process
  /*
  int a,i=0,arr[10];
  cout<<"Enter the number: ";
  cin>>a;
    while(a!=0){
        int b;
        b=a%2;
        // cout<<b;
        a=a/2;
        arr[i]=b;
        i++;
    }
for (int j = i-1; j >= 0; j--)
    cout<<arr[j];
*/
//Decimal to binary-2nd process
/*
int a,i=0,ans=0;
  cout<<"Enter the number: ";
  cin>>a;
    while(a!=0){
        int bit = a&1;
        a>>=1;
        ans=(bit*pow(10,i))+ans;
        i++;
    }
    cout<<ans;
    */
//Binary to decimal
/*
int a,i=0,j=0,b,c=0;
cout<<"Enter the number: ";
cin>>a;
while(a!=0){
    b=a%10;
    a=a/10;
for ( i = 0; i < j; i++)
    b=b*2;
c=c+b;
j++;
}
cout<<c;
*/
//Square root
/*
int a,b=0,i;
cout<<"Enter the number: ";
cin>>a;
for (i = 0; i <= a/2; i++){
    b=i*i;
    if (b>=a)
        break;
}
cout<<"Square root="<<i-1;
*/
//Power of a number
/*
float a;
int b,i=0,c=1;
cout<<"Enter a number: ";
cin>>a;
cout<<"Enter the power: ";
cin>>b;
while(i<b){
c*=a;
i++;
}
cout<<a<<"^"<<b<<"="<<c;
*/
//Compliment of a number
//1st process
/*
int a,ans=0,i=0,j=0,c=0;
cout<<"Enter the number: ";
cin>>a;
if (a==0)
    return 1;

while(a!=0){
    int b=a&1;
    a>>=1;
    ans=b*pow(10,i)+ans;
    i++;
}
i=0;
//  cout<<ans;
while(ans!=0){
    int b=ans%10;
    if(b==0){
        a=1;
    }
    if (b==1)
        a=0;
    ans=ans/10;
    // cout<<a;
    c=a*pow(2,i)+c;
    i++;
}
cout<<c;
*/
//2nd Process
/*
int a,b,c=0;
cout<<"Enter a number: ";
cin>>a;
b=a;
if (a==0)
    return 1;

while(b!=0){
    c<<=1;
    c|=1;
    //c=(c<<1)|1;
b>>=1;
}
cout<<
"Answer="<<((~a)&c);
*/
//Check power of 2 //1st process
/*
int a,b=1;
cout<<"Enter the number: ";
cin>>a;
for (int i = 0; i < 31; i++){
    if (a==b)
        return true;
        break;
        if(INT_MAX>b*2)
    b=b*2;
}
cout<<"0";
return false;
*/
//2nd process
/*
int n,count=0,b=-1;
cout<<"Enter the number to check power of 8: ";
cin>>n;
int m=n;
while(n!=0){
    if(n&1)
        count++;
    n>>=1;
    b++;
}
if(count==1){
    cout<<"It can be written as power of two as: ";
    cout<<"2^"<<b;
}
else cout<<"It can not be written as power of two";
*/
//Prime number
/*
int a;
cout<<"Enter the number: ";
cin>>a;
bool b=true;
for (int i = 2; i < a/2; i++){
    if (a%i==0)
        b=false;
}
if (b==false)
    cout<<a<<" is not a prime number";
else     cout<<a<<" is a prime number";
*/
}