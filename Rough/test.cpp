#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main(){
	string s,str;
	vector<int> v;
	getline(cin,s);
	
	for(char c : s){
		if(isdigit(c)){
			str+=c;
		} else if(!str.empty()){
			v.push_back(stoi(str));
			str="";
		}
	}
	if(!str.empty()){
		v.push_back(stoi(str));
	}
	
	for(int i : v)
	cout<<i<<" ";

	return 0;
}