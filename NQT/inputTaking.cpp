#include <bits/stdc++.h>

using namespace std;

void normal_input(vector<int> &v){
    int num;
    while(cin>>num){
        v.push_back(num);
    }
}

void spaced_input(vector<int> &v){
    string s;
    getline(cin,s);

    string str;
    for(char c : s){
        if(isdigit(c)) str+=c;
        else if(!str.empty()){
            v.push_back(stoi(str));
            str="";
        }
    }
    if(!str.empty()) v.push_back(stoi(str));
}

int main(){
    vector<int> v;

    // normal_input(v);
    spaced_input(v);


    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}