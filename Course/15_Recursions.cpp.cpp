/* #include<iostream>
using namespace std;
void printArray(int arr[],int n){
    if(n==0)return;
    else printArray(arr,n-1);
    cout<<arr[n-1]<<" ";
}
int factorial(int a){
    if(a==0||a==1)return 1;
    return a*factorial(a-1);
}
int fibonacci(int a){
    if(a==0)return 0;
    if(a==1)return 1;
    return fibonacci(a-1)+fibonacci(a-2);
}
void speakthenumber(int a){
    string numbernames[]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN"};
    if(a==0)return;
    int b=a%10;
    a=a/10;
    speakthenumber(a);
    cout<<numbernames[b]<<" ";
}

int issorted(int arr[],int n){
    if(n==0 || n==1)
        return true;
    if(arr[n-1]<arr[n-2])
        return false;
    else return issorted(arr,n-1);
        
}

int sum(int arr[],int n){
    int s=0;
    if(n==0)
        return s;
    else return arr[n-1]+sum(arr,n-1);
}

bool linsearch(int arr[],int n,int k){
    if(n==0)return false;
    if(arr[0]==k)return true;
    int r=linsearch(arr+1,n-1,k);
    return r;
}

int binsearch(int arr[],int l,int h,int k){
    if(l>h)return -1;
    int m=l+(h-l)/2;
    if(arr[m]==k)return m;
    else if(arr[m]<k)return binsearch(arr,m+1,h,k);
    else return binsearch(arr,l,m-1,k);
    
}
int main(){
int a=7,arr[]={-1,2,4,7,88,100,122};
printArray(arr,a);
cout<< "Enter the number: ";
cin>>a;

// cout<<"The factorial of "<<a<<" is: "<<factorial(a);

// cout<<"The "<<a<<"th fibonacci term is: "<<fibonacci(a)<<endl;

// cout<<"The number name is: ";
// speakthenumber(a);

// cout<<"Sorted: "<<issorted(arr,7);

// cout<<"The sum of the elements are: "<<sum(arr,7);

// cout<<"Linear search for "<<a<<" is "<<linsearch(arr,7,a);

cout<<"Binary search for "<<a<<" is "<<binsearch(arr,0,6,a);
}
 */

/* 
//Strings
//Refernce value edited
//Important
#include<iostream>
using namespace std;

//Reverse print
//Base case Process Recursive relation
void print1(int arr[],int a){
    if(a==0)return;
    cout<<arr[a-1]<<" ";
    print1(arr,a-1);
}
//Base case Recursive relation Process
void print2(int arr[],int a){
    if(a==0)return;
    print2(arr,a-1);
    cout<<arr[a-1]<<" ";
}
int aw(int &b){
    return ++(b);
}
char bw(int &b){
    return ++(b);
}
int main(){
    int arr[]={6,23,44,56,67,88,91},a=6,b='a';
    print1(arr,7);
    cout<<endl;
    print2(arr,7);
    cout<<endl;
    cout<<aw(a)<<" ";
    cout<<bw(b)<<endl;
    cout<<a<<endl;
    cout<<char(b)<<endl;

} 
*/
/* 
#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0)return 1;
    else if(b==1)return a;
    int k;
    k=pow(a,b/2);
    if(b%2==0)return k*k;
    else return a*k*k;
}
void print2(int arr[],int a){
    if(a==0)return;
    print2(arr,a-1);
    cout<<arr[a-1]<<" ";
}
void bubblesort(int arr[],int n){
    if(n==0)return;
    for(int i=0;i<n;i++)
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    bubblesort(arr,n-1);
}
int partition(int arr[],int l,int h){
    int i=l,j=h;
    while(i<j){
        do{i++;}while(arr[i]<=arr[l]);
        do{j--;}while(arr[j]>arr[l]);
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}
void quicksort(int arr[],int l,int h){
    if(l>=h)return;
    int p=partition(arr,l,h);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,h);
}

int main(){
int a=5,b=6,arr[]={2,34,4,5,6,-9,0,89,7,66,-24,5,7,88,5,890};
int n=lengthof(arr)/lengthof(arr[0]);

// cout<<"The power of "<<a<<" and exponent "<<b<<" is "<<pow(a,b);

print2(arr,n);
// cout<<"Bubble sorting using recursion:"<<endl;
// bubblesort(arr,n);

cout<<"Quick sorting:"<<endl;
quicksort(arr,0,n);
print2(arr,n);
}

 */

//Subsets
/* 
#include<iostream>
#include<vector>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int>q,vector<int>a,int i){
    if(i==q.size()){
        ans.push_back(a);
        return;
    }

    // Excluding next element
    solve(ans,q,a,i+1);

    //Including next element
    a.push_back(q[i]);
    solve(ans,q,a,i+1);

}
int main(){
    vector<int> q;
    vector<int>a;
    vector<vector<int>> ans;
int i;
q.push_back(1);
q.push_back(2);
q.push_back(3);
// cout<<q[0]<<endl;
// cout<<q[1]<<endl;
// cout<<q[2]<<endl;
// cout<<q[3]<<endl;

solve(ans,q,a,0);

for(int i=0;i<ans.size();i++){
    cout<<"{ ";
    for(int j=0;j<ans[i].size();j++)
    cout<<ans[i][j]<<"";
    cout<<" } "<<endl;
    }
}
 */

//Sequences
/* 
#include<vector>
#include<string>
#include<iostream>
using namespace std;
void sequence(string q,string a,vector<string> &ans,int i){
    if(i==q.length()){
        if(a.length()>0)
        ans.push_back(a);
        return;
    }

    //Exclude
    sequence(q,a,ans,i+1);

    //Include
    a.push_back(q[i]);
    sequence(q,a,ans,i+1);
}

void print (vector<string> ans){
    for(int i=0;i<ans.length();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
string q;
string a;
vector<string>ans;
int i=0;
q.push_back('a');
q.push_back('b');
q.push_back('c');
// cout<<q[0]<<" ";

sequence(q,a,ans,0);

print(ans);
} 
*/


//Keypad strings
/* 
#include<iostream>
#include<vector>
using namespace std;
void keypad(string q,string a,vector<string>&ans,string arr[],int i);
void print(vector<string>ans);
void forloop(int j,string x,vector<string>&ans,string q,string a,int i,string arr[]);
int main(){
string a="";
string q;
string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string>ans;
cout<<"Enter the number from combinations of 2 to 9: ";
cin>>q;
keypad(q,a,ans,arr,0);
print(ans);
}
//Function definitions
void keypad(string q,string a,vector<string>&ans,string arr[],int i){
    if(i>=q.length()){
    ans.push_back(a);
    return;
}
    int index=q[i]-'0';
    string x=arr[index];
    int j=0;
    forloop(j,x,ans,q,a,i,arr);
}
void print(vector<string>ans){
    for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
    cout<<endl;
}
void forloop(int j,string x,vector<string>&ans,string q,string a,int i,string arr[]){
    if(j>=x.length())
    return;
    a.push_back(x[j]);
    keypad(q,a,ans,arr,i+1);
    //Backtracking
    a.pop_back();
    forloop(j+1,x,ans,q,a,i,arr);
}
 */

//Permutations of a string
/* 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void perm(string q,vector<string>&ans,int i){
    if(i>=q.length()){
        ans.push_back(q);
        return;
    }
    for(int j=i;j<q.length();j++){
        swap(q[i],q[j]);
        perm(q,ans,i+1);
        //Backtracking
        swap(q[i],q[j]);
}
}

void print(vector<string>ans){
    cout<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}
int main(){
    string a;
    string q;
    vector<string>ans;
    cout<<"Enter string to get permutations: ";
    cin>>q;
    perm(q,ans,0);
    print(ans);
} 
*/

//Rat in a maze
/* 
#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[][4],int m,int n){
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
}
bool checkvalid(int ans[][4],int mark[][4],int i,int j,int m,int n){
    if(mark[i][j]==0 && ans[i][j]==1 && i<m && j<n && i>=0 && j>=0)
    return true;
    else return false;
}

void path(int maze[][4],int m,int n,int mark[][4],vector <string> &route,string p,int x,int y){

    if(x==n-1&&y==n-1){
    route.push_back(p);
    return;
    }
    mark[x][y]=1;

    //DOWN
    int x1=x+1;
    int y1=y;
    if(checkvalid(maze,mark,x1,y1,4,4)){
        p.push_back('D');
        path(maze,4,4,mark,route,p,x1,y1);
        p.pop_back();
    }

    //LEFT
    x1=x,y1=y-1;
    if(checkvalid(maze,mark,x1,y1,4,4)){
        p.push_back('L');
        path(maze,4,4,mark,route,p,x1,y1);
        p.pop_back();
    }

    //UP
    x1=x-1,y1=y;
    if(checkvalid(maze,mark,x1,y1,4,4)){
        p.push_back('U');
        path(maze,4,4,mark,route,p,x1,y1);
        p.pop_back();
    }

    //RIGHT
    x1=x,y1=y+1;
    if(checkvalid(maze,mark,x1,y1,4,4)){
        p.push_back('R');
        path(maze,4,4,mark,route,p,x1,y1);
        p.pop_back();
    }

    mark[x][y]=0;
}
int main(){
    int maze[][4]={{1,0,0,1},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int mark[4][4]={{0}};
    vector<string> route;
    string p;
    printArray(maze,4,4);
    // printArray(mark,4,4);

    path(maze,4,4,mark,route,p,0,0);
    
    for(int i=0;i<route.size();i++)
    cout<<route[i]<<" ";
}
 */