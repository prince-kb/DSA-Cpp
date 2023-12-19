#include<iostream>
using namespace std;
#define TRUE 1

class ll{
public:
int data;
ll *next;

ll(int d){
this->data=d;
this->next=NULL;
}
};
void print(ll *head){
    cout<<endl;
    if(head==NULL){
    cout<<"EMPTY"<<endl;
    return;
}
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void reverse_print(ll *head){
    if(head==NULL)
        return;
    reverse_print(head->next);
    cout<<head->data<<" ";
}

void insert_head(ll *&head,int data){
ll*l1=new ll(data);
l1->next=head;
head=l1;
}

void insert_tail(ll *&head,int data){
    ll *l1=new ll(data);
    ll *h=head;
    while(h->next!=NULL)
        h=h->next;
    h->next=l1;
}

void delete_head(ll *&head){
    if(head==NULL){
        cout<<"Can't delete"<<endl;
        return;
    }
    ll *l1=head;
    head=head->next;
    delete l1;
}
void delete_tail(ll *&head){
    if(head==NULL){
        cout<<"Can't delete"<<endl;
        return;
    }
    if(head->next==NULL){
        ll *l1=head;
        head=NULL;
        delete l1;
        return;
    }
    ll* prev=NULL;
    ll* l2=head;
    while(l2->next!=NULL){
        prev=l2;
        l2=l2->next;
    }
    prev->next=NULL;
    delete l2;
}

int search_element(ll*head,int data){
    int count=0;
    while(head!=NULL){
        if(head->data==data){
            return count;
        }
        head=head->next;
        count++;
    }
    return -1;
}
int count(ll*head){
    int index=0;
    while(head!=NULL)
        head=head->next,index++;
    return index;
}
bool valid_index(ll *head,int index){
    if(index<0 or index>=count(head)){
        cout<<"Invalid Index"<<endl;
        return false;
    }
    return true;
}
int search_index(ll*head,int index){
    if(!valid_index(head,index))
        return INT_MAX;
        
    int count=0;
    while(count<index){
        head=head->next;
        count++;
    }
    return head->data;
}
void insert_at_position(ll *&head,int index,int data){
    if(index==0)
        insert_head(head,data);
    else if(index==count(head)-1)
        insert_tail(head,data);
    else {
        int count=-1;
        ll *l3=head;
        // ll *l1=NULL;
        while(count<index){
            l3=l3->next;
            count++;
        }
        ll *l2=new ll(data);
        l2->next=l3->next;
        l3->next=l2;
    }
}
void delete_at_position(ll *&head,int index){
    if(index==0)
        delete_head(head);
    else if(index==count(head)-1)
        delete_tail(head);
    else {
        int count=0;
        ll *l3=head;
        ll *l1=NULL;
        while(count<index){
            l1=l3;
            l3=l3->next;
            count++;
        }
        l1->next=l3->next;
        delete l3;
    }
}
void reverse(ll *&head){
    if(head==NULL || head->next==NULL)
        return;

    ll *l1=NULL;
    ll *l2=head;
    ll *l3=l2->next;

    while(l2!=NULL){
        l3=l2->next;
        l2->next=l1;
        
        l1=l2;
        l2=l3;
    }
    head=l1;
}

void reverse1(ll *&head,ll *current,ll *prev){
    if(current==NULL){
        head=prev;
        return;
    }
    reverse1(head,current->next,current);
    current->next=prev;

}

ll* reverse2(ll *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ll *a = reverse2(head->next);
    head->next->next=head;
    head->next=NULL;
    return a;
}

int main(){
    int a,data,index;
    ll *head=NULL;

    cout<<"\n1>PRINT 2>REVERSE PRINT 3>INSERT HEAD 4>INSERT TAIL 5>INSERT AT POSITION 6>DELETE HEAD 7>DELETE TAIL 8>DELETE_AT_POSITION 9>SEARCH ELEMENT 10>SEARCH INDEX 11>COUNT 12>REVERSE.. EXIT"<<endl;
    insert_head(head,11);
    insert_head(head,111);
    insert_head(head,15);
    insert_head(head,13);
    insert_head(head,12);
    while(TRUE){
        cout<<endl<<"Enter your choice : ";
        cin>>a;

        switch(a){
            case 1:
            print(head);
            break;

            case 2:
            cout<<endl;
            reverse_print(head);
            cout<<endl;
            break;

            case 3:
            cout<<"Enter the data : ";
            cin>>data;
            insert_head(head,data);
            break;

            case 4: 
            if(head==NULL){
            cout<<"No tail can be made without head"<<endl;
            break;
            }
            cout<<"Enter the data : ";
            cin>>data;
            insert_tail(head,data);
            break;

            case 5:
            cout<<"Enter index to insert node: ";
            cin>>index;
            if(valid_index(head,index)){
                cout<<endl<<"Enter the data : ";
                cin>>data;
                insert_at_position(head,index,data);
            }
            break;

            case 6:
            delete_head(head);
            break;
            
            case 7:
            delete_tail(head);
            break;

            case 8:
            cout<<"Enter index to delete node: ";
            cin>>index;
            if(valid_index(head,index))
                delete_at_position(head,index);
            break;

            case 9:
            cout<<"Enter item to search: ";
            cin>>data;
            cout<<data<<" fount at position index : "<<search_element(head,data)<<endl;
            break;

            case 10:
            cout<<"Enter index to search: ";
            cin>>index;
            data=search_index(head,index);
            if(data!=INT_MAX)
            cout<<data<<" found at the position "<<index<<endl;
            break;

            case 11:
            cout<<"Number of nodes present = "<<count(head)<<endl;
            break;

            case 12:
            // reverse1(head,head,NULL);
            // reverse(head);
            //reverse2(head);
            head=reverse2(head);
            break;

            default:
            cout<<"EXITTING"<<endl;
            exit(0);
        }        
    }
}

 


//SUBSETS/SEQUENCES
/* 
#include<iostream>
#include<vector>
using namespace std;

void sequence(vector<char> a,int i,vector<char> ans,vector<vector <char>> &solution){
    if(i>=a.size()){
        solution.push_back(ans);
        return;
    }

    sequence(a,i+1,ans,solution);

    ans.push_back(a[i]);
    sequence(a,i+1,ans,solution);
}

void printArray(vector<vector<char>> solution){
    cout<<solution.size()<<endl;
    cout<<solution[0].size()<<endl;

    cout<<endl;

    for(int i=0;i<solution.size();i++){
        cout<<"'";
        for(int j=0;j<solution[i].size();j++)
            cout<<solution[i][j];
            cout<<"' ";
    }
}
int main(){
vector<vector<char>> solution;
vector<char> ans;
vector<char> ap;
ap.push_back('a');
ap.push_back('b');
ap.push_back('c');

int i=0;
sequence(ap,i,ans,solution);

printArray(solution);
} */

/* 
#include<iostream>
#include<vector>
using namespace std;

void keypad(int i,string a,vector<string> &solution,string &ans,vector<string>map){
    if(i>=a.length()){
        solution.push_back(ans);
        return;
    }
    int p=a[i]-'0';
    for(int j=0;j<map[p].length();j++){
        ans.push_back(map[p][j]);
        keypad(i+1,a,solution,ans,map);
        ans.pop_back();
    }

}

void printArray(vector<string> solution){
    cout<<endl;
    for(int i=0;i<solution.size();i++){
        cout<<"'";
            cout<<solution[i];
            cout<<"' ";
    }
    cout<<endl;
}

int main(){
string a;
cout<< "Enter the number : ";
cin>>a;
vector<string> map={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> solution;
string ans="";
keypad(0,a,solution,ans,map);
printArray(solution);
} */

//Permutation of a string

/*
#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<string> solution){
    cout<<endl;
    for(int i=0;i<solution.size();i++){
        cout<<"'";
            cout<<solution[i];
            cout<<"' ";
    }
    cout<<endl;
}

void permutation(int i,string a,vector<string> &solution){
    if(i>=a.length()){
        solution.push_back(a);
        return;
    }
    for(int j=i;j<a.length();j++){
        swap(a[i],a[j]);
        permutation(i+1,a,solution);
        swap(a[i],a[j]);
    }

}

int main(){
string a;
vector<string> solution;
string ans;
cout<< "Enter the string : ";
cin>>a;

permutation(0,a,solution);
printArray(solution);

}
*/

//RAT IN A MAZE
/*
#include<iostream>
#include<vector>
#define MAX 5
using namespace std;

void printArray(vector<vector<char>> solution){
    cout<<endl;
    for(int i=0;i<solution.size();i++){
        for(int j=0;j<solution[i].size();j++)
            cout<<solution[i][j];
            cout<<endl;
    }}

bool check(int i,int j,int visited[MAX][MAX],int arr[MAX][MAX]){
    if(visited[i][j]==0 && arr[i][j]==1 && i<MAX && i>=0 && j>=0 && j<MAX)
        return true;
    else return false;
}

void maze(vector<char> ans,int arr[MAX][MAX],int visited[MAX][MAX],vector<vector<char>> &solution,int i,int j){
    
    if(i==MAX-1 && j==MAX-1){
        solution.push_back(ans);
        return;
    }

    visited[i][j]=1;
    int m,n;
    
    //DOWN
    m=i+1,n=j;
    if(check(m,n,visited,arr)){
        ans.push_back('D');
        maze(ans,arr,visited,solution,m,n);
        ans.pop_back();
    }
    //LEFT
    m=i,n=j-1;
    if(check(m,n,visited,arr)){
        ans.push_back('L');
        maze(ans,arr,visited,solution,m,n);
        ans.pop_back();
    }
    //RIGHT
    m=i,n=j+1;
    if(check(m,n,visited,arr)){
        ans.push_back('R');
        maze(ans,arr,visited,solution,m,n);
        ans.pop_back();
    }
    //UP
    m=i-1,n=j;
    if(check(m,n,visited,arr)){
        ans.push_back('U');
        maze(ans,arr,visited,solution,m,n);
        ans.pop_back();
    }
    
    visited[i][j]=0;
}
int main(){
int arr[MAX][MAX]={
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1}
};
int visited[MAX][MAX]={0};
vector<char>ans;
vector<vector<char>> solution;

    if(arr[0][0]!=0 && arr[MAX-1][MAX-1]!=0)
        maze(ans,arr,visited,solution,0,0);
    else cout<<"Solution not possible"<<endl;

    printArray(solution);
}
*/