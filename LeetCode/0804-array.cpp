// 804. Unique Morse Code Words

#include<iostream>
#include<vector>
#include<set>
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<string>a){
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<endl;
    cout<<endl;
}

int main(){
    vector<string>table={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> middleman;
    vector<string> solution;
    vector<string> words = {"gin","zen","gig","msg"};

    for(int i=0;i<words.size();i++){
        string p;
        for(int j=0;j<words[i].size();j++){
            p.append(table[int(words[i][j]-'a')]);
        }
        middleman.insert(p);
    }

    for (auto it = middleman.begin(); it !=  middleman.end(); ++it)
        solution.push_back(*it);
    // return 0;
    cout<<middleman.size()<<endl;
    printArray(solution);
    // cout<<middleman.value_comp

}