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
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	//head pointed to node1
	Node* head=node1;
	print(head);
	insertH(head, 12);
	print(head);
	return 0;
}
