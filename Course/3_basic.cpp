#include<iostream>
using namespace std;
int main(){
// ASCII check
   /* int a;
cout<< "Enter the ASCII value: ";
cin>>a;
if (a<=122 && a>=97)
   cout<<"Lowercase";
else if (a<=90 && a>=65)
cout<<"Uppercase";
else if(a>=48&&a<=57)
cout<<"Number";
else cout<<"Neither lowercase nor uppercase nor digit";
cout<<"\nValue at a is: "<< char(a);
*/
//SUM
/*
int n,i=1,sum=0;
cout<<"Enter the number upto which you want the sum: ";
cin>>n;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<"Sum="<<sum;
*/
//Sum of Even/Odd numbers
/*
int a,b,c,sum=0;
cout<<"1.Even sum\t2.Odd sum"<<endl;
cout<<"1.Enter your choice:";
cin>>a;
cout<<"\nEnter first and last number:";
cin>>b>>c;
if (a==1)
{
   if (b%2==0){
    while(b<=c){
        sum=sum+b;
        b=b+2;
    }
   }
    else {
        b=b+1;
        while(b<=c){
            sum=sum+b;
            b=b+2;
        }
    }
}
else if(a==2){
if(b%2==0){
    b=b+1;
    while(b<=c){
        sum=sum+b;
        b=b+2;
    }
}
else {
    while(b<=c){
    sum=sum+b;
    b=b+2;
    }
}
}
else cout<<"Wrong input";
cout<<"Sum="<<sum;
*/
// 111
// 222
// 333
/*
int a,b=1,c;
cout<<"Enter the maximum number of stars:";
cin>>a;
while(b<=a){
    c=1;
while(c<=a){
    cout<<b;
    c=c+1;
}
b=b+1;
cout<<"\n";
}
*/
// *
// **
// ***
// ****
/*
int a,i=1,j=1;
cout<<"Enter number of rows: ";
cin>>a;
while(i<=a){
    j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }
    i++;
    cout<<"\n";
}
*/
// 1234
// 1234
// 1234
/*
int n,i=1,j=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<j<<" ";
        // cout<<n-j+1<<" ";
        j=j+1;
    }
    cout<<" "<< endl;
    i=i+1;
}
*/
// 321
// 321
// 321
/*
int n,i,j;
cout<<"Enter number of rows: ";
cin>>n;
i=1,j=1;
while(i<=n){
    j=1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j=j+1;
    }
    cout<<""<<endl;
i=i+1;
}
*/
// 123
// 456
// 789
/*
int n,i=1,k=1;
cout<<"Enter the number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<k<<" ";
        j=j+1,k=k+1;
    }
    i=i+1;
    cout<<endl;
}
*/
// 1
// 22
// 333
// 4444
/*
int row,i=1;
cout<<"Enter number of rows: ";
cin>>row;
while (i<=row){
    int col=1;
    while(col<=i){
cout<<i;
col++;
    }
    i++;
    cout<<endl;
}
*/
// 1
// 23
// 456
// 78910
/*
int n,i=1,k=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<k<<" ";
        j=j+1,k=k+1;
    }
    i=i+1;
    cout<<endl;
}
*/
// 1
// 12
// 234
// 3456
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1,k=i;
    while(j<=i){
        cout<<k<<" ";
        j=j+1,k=k+1;
    }
    i=i+1;
    cout<<endl;
}
*/
// ||
/*
int i=0,n;
cout<<"Enter the number of rows: ";
cin>>n;
while(i<n){
    int j=0;
    while(j<=i){
        cout<<i+j<<" ";
        j=j+1;
    }
    i=i+1;
    cout<<endl;
}
*/
/*
int n,i,j;
cout<<"Enter the row value:";
cin>>n;
while(i<=n){
    int j=i;
    while(j>=1){
cout<<j;
j=j-1;
    }
    i=i+1;
    cout<<endl;
}
*/
// ||
/*
int n,i=1,j;
cout<<"Enter the row value:";
cin>>n;
while(i<=n){
    j=1;
    while(j<=i){
        cout<<i-j+1;
        j=j+1;
    }
    i=i+1;
cout<<endl;
}
*/
// ABC
// ABC
// ABC
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch = 'A'+ j -1;
        cout<<ch<<" ";
        j=j+1;
    }
    i=i+1;
    cout<<endl;
}
*/
// ABC
// BCD
// CDE
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
int j = 1;
while(j<=n){
    char ch ='A'+j+i-1-1;
    cout<<ch<<" ";
    j=j+1;
}
i=i+1;
cout<<endl;
}
*/
// A
// BC
// CDE
// DEFG
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
int j=1;
while(j<=i){
char ch = 'A'+ j + i - 2;
cout<<ch<<" ";
j=j+1;
}
i=i+1;
cout<<endl;
}
*/
// D
// DC
// DCB
// DCBA
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch ='A'+n-j;
        cout<<ch<<" ";
        j=j+1;
    }  
    i=i+1;
    cout<<endl;
}
*/
// D
// CD
// BCD
// ABCD
/*
int n,i=1;
cout<<"Enter the number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch = 'A'+n+j+i-2;
        cout<<ch<<" ";
        j=j+1;
    }
    i=i+1;
    cout<<endl;
}
*/
// ****
//  ***
//   **
//    *
/*
   int n,i=1;
   cout<<"Enter number of rows: ";
   cin>>n;
   while(i<=n){
    int j=1;
    while(j<i){
            cout<<" ";
        j=j+1;
    }
    int k=0;
    while(k<=n-i){
        cout<<'*';
        k++;
    }
    cout<<endl;
    i=i+1;
   }
*/
//    *
//   **
//  ***
// ****
/*
int i=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n-i){
        cout<<" ";
    j++;
    }
    int k=1;
    while(k<=i){
        cout<<'*';
        k++;
    }
    i=i+1;
    cout<<endl;
}
*/
// 1111
//  222
//   33
//    4
/*
int n,i=1;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
int j=1;
    int k=1;
while(k<=i){
    cout<<" ";
    k++;
}
while(j<=n-i+1){
    cout<<i;
    j=j+1;
    }
i=i+1;
cout<<endl;
}
*/
//    1
//   22
//  333
// 4444
/*
int i=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n-i){
        cout<<" ";
        j++;
    }
    j=1;
    while(j<=i){
        cout<<i;
        j++;
    }
    i++;
    cout<<endl;
}
*/
// 1234
//  234
//   34
//    4
/*
int i=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int a=1;
    while(a<i){
        cout<<" ";
        a++;
    }
    while(a<=n){
        cout<<a;
        a++;
    }
    i++;
    cout<<endl;
}
*/
//    1
//   23
//  456
// 78910
/*
int i=1,k=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
int j=i+1;
while(j<=n){
cout<<"  ";
j++;
}
j=0;
while(j<i){
cout<<k<<" ";
k++,j++;
}
i++;
cout<<endl;
}
*/
//   1
//  121 
// 12321
/*
int i=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n-i){
    cout<<" ";
    j++;
}
int k=1;
while(k<=i){
    cout<<k;
    k++;
}
while(j<n){
    cout<<k-2;
    k--,j++;
}
i++;
cout<<endl;
}
*/
// 12344321
// 123**321
// 12****21
// 1******1
/*
int i=1,n;
cout<<"Enter number of rows: ";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    j=i;
    int k=1;
    while(k<=2*i-2){
        cout<<'*';
        k++;
    }
    while(j<=n){
        cout<<n-j+1;
        j++;
    }
    i++;
    cout<<endl;
}
*/
}