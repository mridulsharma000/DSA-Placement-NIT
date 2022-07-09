#include<iostream>
using namespace std;
class node{
    public:
    int data;
    int* prev;
    node* next;
    
    node(int d){
        this-> data=d;
        this-> prev=NULL;
        this-> next=NULL;
    }
};


void Print(node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* a= new node(78);
    node* head= a;
    Print(head);
}
