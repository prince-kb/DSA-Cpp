#include<iostream>
using namespace std;
void toh(int n,char a,char b,char c){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    }
    else{
        toh(n-1,a,c,b);
        cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main(){
int a;
cout<< "Enter number of disks: ";
cin>>a;
toh(a,'A','B','C');

}