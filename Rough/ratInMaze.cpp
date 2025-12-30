#include<iostream>
#include<vector>
#include<random>
using namespace std;

#define MAX 4

int randomGenerator(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 2);
    return distrib(gen);
}

void generateMaze (vector<vector<bool>> &v,int n){
    for (int i = 0; i <= n; i++){
        vector<bool> a;
        for (int j = 0; j <= n; j++){
            if(i==j || i==0 && j==0 || i==n-1&&j==n-1) a.push_back(true);
            else a.push_back(randomGenerator());
        }
        v.push_back(a);
    }
}

void generateVisited (vector<vector<bool>> &v,int n){
    for (int i = 0; i <= n; i++){
        vector<bool> a;
        for (int j = 0; j <= n; j++)
            a.push_back(false);
        v.push_back(a);
    }
}

void printArray(vector<vector<bool>>a){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void printSolution(vector<string> v){
    if(!v.size()){
        cout<<"No Solution found for rat"<<endl;
        return;
    }
    for(string s : v) cout<<s<<" ";
    cout<<endl;
}

bool valid(int i,int j,int max,vector<vector<bool>> maze,vector<vector<bool>> visited){
    if(i>=0 && j>=0 && i<=max && j<=max && maze[i][j] && !visited[i][j]) return true;
    return false;
}

void solveMaze(vector<string> &ans,vector<vector<bool>> maze,vector<vector<bool>> visited,string s,int i, int j,int max){
    visited[i][j]=true;
    if(i>=max && j>=max){
        ans.push_back(s);
        return;
    }

    //RIGHT MOVEMENT
    if(valid(i,j+1,max,maze,visited)){
        j++;
        visited[i][j]=true;
        s.push_back('R');
        solveMaze(ans,maze,visited,s,i,j,max);
        s.pop_back();
        visited[i][j]=false;
        j--;
    }

    //DOWN MOVEMENT
    if(valid(i+1,j,max,maze,visited)){
        i++;
        visited[i][j]=true;
        s.push_back('D');
        solveMaze(ans,maze,visited,s,i,j,max);
        s.pop_back();
        visited[i][j]=false;
        i--;
    }

    //LEFT MOVEMENT
    if(valid(i,j-1,max,maze,visited)){
        j--;
        visited[i][j]=true;
        s.push_back('L');
        solveMaze(ans,maze,visited,s,i,j,max);
        s.pop_back();
        visited[i][j]=false;
        j++;
    }

    //UP MOVEMENT
    if(valid(i-1,j,max,maze,visited)){
        i--;
        visited[i][j]=true;
        s.push_back('U');
        solveMaze(ans,maze,visited,s,i,j,max);
        s.pop_back();
        visited[i][j]=false;
        i++;
    }
}

void solutionVerifier(vector<string> ans, vector<vector<bool>> v,int max){
    cout<<endl;
    for(string s : ans){
        int i=0,j=0;
        for(char c : s){
            if(c=='D') i+=1;
            else if(c=='R') j+=1;
            else if(c=='L') j-=1;
            else i-=1;
        }
        if(i==max && j==max) cout<<"Path "<<s<<" is correct"<<endl;
        else cout<<"Path "<<s<<" is incorrect"<<endl;
    }
    cout<<endl;
}


int main(){
    vector<vector<bool>> v;
    vector<vector<bool>> visited;
    vector<string>ans;

    generateMaze(v,MAX);
    generateVisited(visited,MAX);
    printArray(v);

    solveMaze(ans,v,visited,"",0,0,MAX);
    printSolution(ans);

    solutionVerifier(ans,v,MAX);

}
