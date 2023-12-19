#include <iostream>
using namespace std;

int check(int &a,int &b){
int ans=(a>b) ? a:b;
return ans;
}

//Base case Recursive relation Process
void print1(int a){
    if(a==0)return;
    print1(a-1);
    cout<<a<<endl;
}

// Base case Process Recursive relation 
void print2(int a){
    if(a==0)return;
    cout<<a<<endl;
    print2(a-1);
}
int main(){
    int a=10,b=1;
  /*   
    int ans=check(a,b);
    cout<<ans<<endl; */
    cout<<endl;
    print1(a);
    cout<<endl;
    print2(a);
}

