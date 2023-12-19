#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;

};
struct node *root;
struct node* create(node *root,int data){
    root=(struct node*)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}

int height(node *p){
    int count=0;
    while(p!=NULL)
        p=p->left,count++;
    return count;
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }  
}

void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<' ';
    }
}

void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main(){
int a;
cout<< "Enter number of nodes to be created: " << endl;
// cin>>a;
struct node *p,*p1,*p2,*p3,*p4,*p5;
p=create(p,1);
p1=create(p1,2);
p2=create(p2,3);
p3=create(p3,4);
p4=create(p4,5);
p5=create(p5,6);
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;
// p3->left=p5;


cout<<"The preorder traversal is: ";
preorder(p);
cout<<endl;
cout<<"The postorder traversal is: ";
postorder(p);
cout<<endl;
cout<<"The inorder traversal is: ";
inorder(p);
cout<<endl;
cout<<"The max height of tree is: "<<height(p);
}