#include<iostream>
using namespace std;
    int ss(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                for(int j=0;j<needle.size();j++){
                    if(haystack[i+j]!=needle[j]){
                        cout<<i+j<<" "<<j<<endl;
                        break;
                    }
                    else if(j==needle.size()-1){
                        return i;
                    }
                    else break;
                    
                }

            }
        }
        return -1;
    }
int main(){
cout<<ss("leetcode","leeto");
}