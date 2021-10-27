#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	};

void print(Node*head){//prints LL and no. of elements
	int count=0;
	Node*temp=head;
	while(temp->next!=head){//prints forward LL
		cout<<temp->data<<' ';
		temp=temp->next;
		count++;
	}
	cout<<temp->data<<endl;
	cout<<"Size:"<<count+1<<endl;//prints no. of elements

}
void insertnode(int d,Node*head){//inserts Node at end
	Node*temp=head;
	while(temp->next!=head){
		temp=temp->next;}
		Node*newnode=new Node(d);
		temp->next=newnode;
		newnode->next=head;
}
void deletenode(Node*head){//deletes last node
	Node*temp=head->next;
	Node*prev=head;
	while(temp->next!=head){
		temp=temp->next;
		prev=prev->next;}

		prev->next=head;



}
int main(){
	Node*head=new Node(1);
	Node *n1=new Node(2);
	head->next=n1;
	Node *n2=new Node(3);
	n1->next=n2;
	Node *n3=new Node(4);
	n2->next=n3;
	Node *n4=new Node(5);
	n3->next=n4;
	n4->next=head;
	cout<<"before insertion:"<<endl;
	print(head);
	cout<<"after insertion:"<<endl;
	insertnode(6,head);
	print(head);
	deletenode(head);
	cout<<"after deletion:"<<endl;
print(head);
}