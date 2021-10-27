#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node *prev;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
		this->prev=NULL;
	}
	};
void print(Node*head){//prints LL and no. of elements them LL in reverse
	int count=0;
	Node*temp=head;
	while(temp->next!=NULL){//prints forward LL
		cout<<temp->data<<' ';
		temp=temp->next;
		count++;
	}
	cout<<temp->data<<endl;
	cout<<count+1<<endl;//prints no. of elements
	while(temp!=NULL){//prints LL in reverse order
		cout<<temp->data<<' ';
		temp=temp->prev;
	}
	cout<<endl;

}
void deletenode(Node*head){//deletes last node
	Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	Node*p=temp->prev;
	p->next=NULL;

}
void insertnode(int d,Node*head) {//inserts node at last
  Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	Node* newnode=new Node(d);
	temp->next=newnode;
	newnode->next=NULL;
	newnode->prev=temp;
  }


int main(){
	Node*head=new Node(1);
	head->prev=NULL;
	Node *n1=new Node(2);
	head->next=n1;
	n1->prev=head;
	Node *n2=new Node(3);
	n1->next=n2;
	n2->prev=n1;
	Node *n3=new Node(4);
	n3->prev=n2;
	n2->next=n3;
	Node *n4=new Node(5);
	n4->prev=n3;
	n3->next=n4;
	n4->next=NULL;
	cout<<"before insertion:"<<endl;
print(head);
insertnode(6,head);
cout<<"after insertion:"<<endl;
print(head);
deletenode(head);
cout<<"after deletion:"<<endl;
print(head);


}
