//Factorial
/*
#include<iostream>
using namespace std;
int fact(int a){
    int f=1;
    for (int i = 2; i <= a  ; i++)
        f = f*i;
        return f;
}
int perm(int n,int r){
return fact(n)/fact(n-r);
}
int comb(int n,int r){
return (fact(n)/(fact(r)*fact(n-r)));
}
int main(){
    int a,n,r;
cout<<"Enter the value of n and r: ";
cin>>n>>r;
cout<<"For permutation type 1,for combination type 2: ";
cin>>a;
if(a==1)
    cout<<perm(n,r);
else if(a==2)
cout<<comb(n,r);
else cout<<"Wrong output";
}
*/
//3*n+7
/*
#include<iostream>
using namespace std;
int aap(int a){
    return 3*a+7;
}
int sum(int a){
    int s=0;
for (int i = 1; i <=a; i++)
    s=s+3*i+7;
return s;
}
int main(){
int a;
cout<< "Enter the number to find it's nth term and sum upto n term: " << endl;
cin>>a;
cout<<"nth term of 3*a+7 is "<<aap(a)<<endl;
cout<<"Sum upto nth term of 3*a+7 is "<<sum(a);
}
*/
/*
#include<iostream>
using namespace std;
int update(int a){
    a=a/2;
    return a;
}
int main(){
int a;
cout<< "Enter the number: " << endl;
cin>>a;
a=update(a);
cout<<a;
}
*/
//nth term of fibonaccci series
/*
#include<iostream>
using namespace std;
int fib(int n){
   int a=0,b=1,c,s=0,i=3;
    while(i<=n){
s=a+b;
a=b,b=s;
i++;
}
return s;
}
int main(){
int n,a=0,b=1;
cout<< "Enter the term you need" << endl;
cin>>n;
if(n==1)
cout<<a;
else if(n==2)
cout<<b;
else cout<<fib(n);
}
*/
//counting number of 1
#include<iostream>
using namespace std;
int bit1(int n){
    int count=0;
    while(n!=0){
        if (n&1==1)
        count++;
    n=n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<bit1(n);
}