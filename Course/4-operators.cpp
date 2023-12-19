#include<iostream>
using namespace std;
int main(){
    int n,a=11,b=1;
    cout<<"a^b="<<int(a^b)<<endl;
    cout<<"~b="<<int(~b)<<endl;
    cout<<"a&b="<<int(a&b)<<endl;
    cout<<"a|b="<<int(a|b)<<endl;
    cout<<"a<<b="<<int(a<<b)<<endl;
    cout<<"a>>b="<<int(a>>b)<<endl;

    //Fibonacci series
    /*
    cout<<"Enter number of terms: ";
    cin>>n;
    cout<<a<<","<<b<<",";
    for(int i=0,sum=0;i<n-2;b+=a,a=b-a,i++){ //a=b,b=sum
        sum=a+b;
        cout<<sum<<",";
    }
    */
//    for(int i=0;i<=15;i+=1){
//     cout<<i<<" ";
//     if (i&1)
//         cout<<"yes";
//    }
}