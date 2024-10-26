#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class node {

    public: 
    int val;
    node *left;
    node *right;

    node(int v){
        val=v;
        left=nullptr;
        right=nullptr;
    }
    node(int v,node *l){
        val=v;
        left=l;
        right=nullptr;
    }
    node(int v,node *l,node *r){
        val=v;
        left=l;
        right=r;
    }
};

void inorder(node *root){
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(node *root){
    if(!root) return;
    cout<<root->val<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node *root){
    if(!root) return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->val<<" ";
}

void bfs(node *root,vector<int> &v){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        while(n--){
            node *temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void dfs(node *root,vector<int> &v){
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        int n=s.size();
        while(n--){
            node *temp=s.top();
            s.pop();
            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
            v.push_back(temp->val);
        }
    }
}

void levelSum1(node *root,int i,vector<int> &v){
    if(i>v.size()-1){
        v.push_back(root->val);
    } else v[i]+=root->val;
    if(root->left) levelSum1(root->left,i+1,v);
    if(root->right) levelSum1(root->right,i+1,v);
}

void levelSum2(node *root,vector<int> &v){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int sum=0;
        int n=q.size();
        while(n--){
            node *current = q.front();
            q.pop();
            sum+=current->val;            
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        v.push_back(sum);
    }
}

void print(vector<int> v){
    for(int i :  v)
        cout<<i<<" ";
        cout<<endl;
}

int main(){

    node *root = new node(20);

    node *l2 = new node(23);
    node *l3 = new node(24);
    node *r2 = new node(25);
    node *r3 = new node(26);

    node *l1 = new node(21,l2,l3);
    node *r1 = new node(22,r2,r3);

    node *l4=new node(27);
    node *l5=new node(28);
    node *l6=new node(29);

    l2->left=l4;
    l2->right=l5;

    l3->left=l6;

    root->left=l1;
    root->right=r1;



    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;

    cout<<"BFS : ";
    vector<int> v;
    bfs(root,v);
    print(v);

    cout<<"DFS : ";
    vector<int> w;
    dfs(root,w);
    print(w);

    cout<<"LevelSum from recursion : ";
    vector<int> x;
    x.push_back(0);
    levelSum1(root,0,x);
    print(x);

    cout<<"LevelSum from queue BFS : ";
    vector<int> y;
    levelSum2(root,y);
    print(y);

    cout<<"Height : "<< x.size();

    return 0;
}