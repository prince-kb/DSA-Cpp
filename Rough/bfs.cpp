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
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void preorder(node *root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node *root){
    if(root==nullptr) return;
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
            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);
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
            v.push_back(temp->val);
            if(temp->right!=nullptr) s.push(temp->right);
            if(temp->left!=nullptr) s.push(temp->left);
        }
    }
}


void print(vector<int> v){
    for(int i : v)
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

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    vector<int> v;
    bfs(root,v);
    print(v);

    vector<int> w;
    dfs(root,w);
    print(w);

    return 0;
}