#include <iostream>
#include <vector>
using namespace std;

void recursion1(vector<string> &v, string s, string t, int i){
    v.push_back(t);
    if (i >= s.size()) return;
    t += s[i];
    recursion1(v, s, t, i + 1);
}

void substrings(vector<string> &v, string s){
    string t = "";
    for (int i = 0; i < s.size(); i++){
        t += s[i];
        recursion1(v, s, t, i + 1);
        t = t.substr(0, t.size() - 1);
    }
}

void permutations(vector<string> &v,string s,int i){
    if(i==s.size()-1){
        v.push_back(s);
        return;
    }
    swap(s[i],s[i+1]);
    permutations(v,s,i+1);
    swap(s[i],s[i+1]);
    permutations(v,s,i+1);
}

void combinations(vector<string> &v, vector<string> mapping,string num,string ans,int k){
    if(k>=num.size()){
        v.push_back(ans);
        return;
    }
    int z = num[k]-'0';
    for(int i=0;i<mapping[z].size();i++){
        ans.push_back(mapping[z][i]);
        combinations(v,mapping,num,ans,k+1);
        ans.pop_back();
    }
}

void print(vector<string> v){
    for (string s : v)
        cout << s << ", ";
}

int main(){
    string s = "kalum";
    vector<string> mapping={"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> v;

    // substrings(v, s);
    // permutations(v,s,0);
    combinations(v,mapping,"857587","",0);

    print(v);
}

