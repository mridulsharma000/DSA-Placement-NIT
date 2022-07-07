#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertH(Node* &head, int d){
    //create a new Node
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void insertT(Node* &tail, int d){
    //create a new Node
    Node*temp =new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void insertPos(Node* &tail/*Agr tail pe kr rhe h toh*/,Node* &head, int position, int d){
	//Inserting at position 1
	if(position==1){
	insertH(head, d);
        return;
    }//Newly added
    Node*temp = head;
    int cnt=1; //starting Node 1 se hai
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }
	//inserting at the last position
	if(temp->next ==NULL){
		insertT(tail,d);
		return;}
    //creating a node for d
    Node* NodeToInsert= new Node(d);
    NodeToInsert-> next = temp->next;
    temp->next= NodeToInsert;
}
//Traversal
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main() {
	//create new Node
	Node* node1= new Node(10);
	//cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
	//head pointed to node1
	Node* head=node1;
	Node* tail=node1;
// 	print(head);
	insertH(head, 12);
	insertT(tail, 15);
	print(head);
	insertPos(head,3,22);
	print(head);
	return 0;
}

// 1st position pe add nhi ho paayega is code se kuch kyuki cnt =1 se hi start kiya hai

// Uske liye: 
// if(position==1){
// 	insertH(head, d);
// }
