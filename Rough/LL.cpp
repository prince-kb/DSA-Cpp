#include<iostream>
#include<map>
using namespace std;


class LinkedList{
    public :
    int data;
    LinkedList * next;
    LinkedList(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(int data,LinkedList *&head){
    LinkedList *temp = new LinkedList(data);
    temp->next=head;
    head=temp;
}
void print(LinkedList *head){
    if(head==NULL)
        return;
    cout<<head->data<<"-->";
    print(head->next);
}
LinkedList *end(LinkedList *head){
    if(head->next==NULL){
        return head;
    }
    else return end(head->next);
}
//Detecting starting point of loop will help us to remove loop
//This algorithm will return the starting point of loop which is good but it takes space complexity O(n)
bool detectLoop1(LinkedList *head){
    map<LinkedList*,bool> visit;
    while(head!=NULL){
    if(visit[head]==true){
        cout<<"Loop present at "<<head->data;
        return true;
    }
    else(visit[head]=true);
    head=head->next;
    }
    cout<<"No loop present"<<endl;
    return false;
}

//This is Floyd loop detecting algorithm it has space complexty O(1) but it cannot return the starting point of loop
LinkedList *detectLoop2(LinkedList *head){
    LinkedList *slow=head;
    LinkedList *fast=head;

    while(slow->next!=NULL && fast->next!=NULL){
        if(slow==fast && fast!=head){
            // cout<<"Loop is present"<<endl;
            return fast;
        }
        slow=slow->next;
        fast=fast->next;
        if(fast->next!=NULL)
            fast=fast->next;
    }
    return NULL;
    // cout<<"No loop present"<<endl;
}

//This is modified Floyd loop detecting algorithm which can detect loop and its startig point with space complexity O(1)
LinkedList* detectLoop3(LinkedList *head){
    LinkedList*fast=detectLoop2(head);
    LinkedList*slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
        return fast;
    }
 
void removeLoop(LinkedList * head){
    LinkedList *temp=detectLoop3(head);
    if(temp==NULL)
        cout<<"No loop present"<<endl;
    else temp->next=NULL;
}

int main(){
    
    LinkedList *head = new LinkedList(19);
    InsertAtHead(10,head);
    InsertAtHead(111,head);
    InsertAtHead(13,head);
    InsertAtHead(12,head);

    LinkedList *tail = end(head);
    print(head);
    cout<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    //Creating a loop
    tail->next=head->next;

    // detectLoop1(head);
    // detectLoop2(head) ? cout<<"Loop present"<<endl : cout<<"No loop present"<<endl;
    cout<<"Loop at "<<detectLoop3(head)->data<<endl;

    removeLoop(head);
    print(head);
}