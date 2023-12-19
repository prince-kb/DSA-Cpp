#include<iostream>
using namespace std;
#define TRUE 1
class ll{
    public:

    int data;
    ll *next;

        ll(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(ll *temp){
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }  
    cout<<endl;      
}
void insert_head(int data,ll *&head){
    ll *l2=new ll(data);
    l2->next=head;
    head=l2;
}
void insert_tail(int data,ll *&head){
    ll*l3=new ll(data);
    ll*temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=l3;
}
void delete_head(ll *&head){
    if(head->next==NULL){
        cout<<"Cannot delete"<<endl;
        return;
    }
    ll *temp=head;
    head=head->next;
    delete temp;
}
void delete_tail(ll *&head){
    if(head->next==NULL){
        cout<<"Cannot delete"<<endl;
        return;
    }
    ll *temp=head;
    while(temp->next->next!=NULL)
    temp=temp->next;
    delete temp->next;
    temp->next=NULL;
}


    /*
void reverse1(ll *&head){
    if(head==NULL || head->next==NULL){
        return;
    }
    ll *current=head;
    ll *prev=NULL;
    ll *forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    head=prev;
}
*/

void reverse2(ll *&head,ll *prev,ll *current){
    if(current==NULL){
        head=prev;
        return;
    }
    ll *forward=current->next;

    //This relation can be written as either recursive relation first then the next call pr vice versa
    //Simply the next two lines can be moved alternately
    current->next=prev;
    reverse2(head,current,forward);
}
/* 
//Unfinished
ll *reverse3(ll *aalu,ll *&head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    ll *temp=reverse3(aalu,head->next);
    head->next->next=head;
    head->next=NULL;
    aalu=temp;
    return temp;
}
 */

int middleelement(ll *&head){
    if(head==NULL || head->next==NULL)
    return head->data;
    ll*temp1=head;
    ll*temp2=head->next;
    while(temp2!=NULL){
        temp2=temp2->next;
        if(temp2!=NULL)
            temp2=temp2->next;
        temp1=temp1->next;
    }
    return temp1->data;
}

int main(){
    ll *l1=new ll(10);
    ll *head=l1;
    int a,data;
    insert_head(11,head);
    insert_head(12,head);
    insert_head(13,head);
    insert_head(14,head);
    insert_head(15,head);
    insert_head(16,head);
while(TRUE){
    cout<<endl<<" 1>PRINT 2>INSERT HEAD 3>INSERT TAIL 4>DELETE HEAD 5>DELETE TAIL 6>REVERSE 7>MIDDLE ELEMENT AnyOtherKey>EXIT :";
        cin>>a;
        

    switch (a)
    {
    case 1:
        print(head);
        break;
    case 2: 
        cout<<"Enter data: ";
        cin>>data;
        insert_head(data,head);
        break;
    case 3: 
        cout<<"Enter data: ";
        cin>>data;
        insert_tail(data,head);
        break;
    case 4:
        delete_head(head);
        break;
    case 5:
        delete_tail(head);
        break;
    case 6:
        // reverse1(head);
        reverse2(head,NULL,head);
        //Unfinished
        // reverse3(NULL,head);
        break;
    case 7:
        cout<<"The middle element is : "<<middleelement(head)<<endl;;
        break;
    default:
        exit(0);
        break;
    }
}
}