#include<iostream>
#include<vector>
using namespace std;

    string lcpos(vector<string> &strs, string & ans){
        // string a;
        string p = strs[0];
        for(int i=0;i<strs[i].length();i++){
        for(int j=0;j<strs.size();j++){
            if(p[i]!=strs[j][i]){
                return ans;
            }
        }
        char x = p[i];
        ans += p[i];
    }
        cout<<ans;
        return ans;
    }
int main(){
    vector <string> strs;
    strs.push_back("flooers");
    strs.push_back("floover");
    strs.push_back("flooes");

    string ans = "";
    lcpos(strs,ans);

    cout<<ans<<endl;


    

}