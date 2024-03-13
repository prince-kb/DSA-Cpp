#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void printArray(vector<string>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    vector<string>a={"Hiiii","ghj","gyfv","gdhj"};
    vector<int>z;
    char x='g';
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].length();j++){
            if(a[i][j]==x){
            z.push_back(i);
            break;
        }
        }
    }  
    printArray(z);
}