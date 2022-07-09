#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this-> data=data;
        this-> next=NULL;
    }
};


void insertAtHead(node* &head, int d){
    node* temp= new node(d);//ye wala ghusana hai
    
        temp->next=head;
        head= temp;
    
}


void insertAtTail(node* &tail, int d){
    node* temp= new node(d);
    tail-> next=temp;
    tail= tail->next;
    
}


void insertAtAny(int position, node* &head, node* &tail, int d){
  
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
    
    node*first =head;
    if(first->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    
    int cnt=1;
    while(cnt<position-1){
        first=first->next;
        cnt++;
    }
    
    node*temp= new node(d);//node to insert
    temp->next= first->next;
    first->next=temp;
}

void Print(node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool Search(node* &head, int key){
    node* temp= head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp-> next;
    }
    return false;
}

void dlt(node* &head, int val){
    node* temp= head;
    while(temp->next->data!=val){
        temp= temp->next;
    }
    node* ToDelete= temp->next;
    temp->next= temp->next->next;
    delete ToDelete;
}

void DLT(node* head, int position){
    node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }
    node* ToDelete= temp->next;
    temp->next= temp->next->next;
    delete ToDelete;
}
int main(){
    node* a= new node(78);
    node* head= a;
    node* tail= a;
    insertAtHead(head,16);
    insertAtTail(tail,19);
    Print(head);
    insertAtAny(4,head,tail,31);
    insertAtAny(2,head,tail,2023);
    Print(head);
    insertAtAny(1,head,tail,576);
    Print(head);
    dlt(head, 2023);
    Print(head);
    DLT(head,4);
    Print(head);
}
