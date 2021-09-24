#include <iostream>
using namespace std;

const int Size=10;
int Stack[Size]={};
int Top=-1;

bool isempty(){
	if(Top==-1){return true;}
	else{return false;}
}

void show_top(){
 if(isempty()){
  cout<<"Stack is empty!\n";}
 else{
  cout<<"Element at top is: "<<Stack[Top]<<"\n";}
	return;}

void push(int value){
	if(Top==Size-1){
		cout<<"Stack Overflow"<<endl;}
	else{
		Top++;
		Stack[Top]=value;}
		return;}

void pop(){
 if(isempty())
  cout<<"Stack is empty!\n";
 else
  Top--;}

void displayStack(){
  if(isempty()){
  	cout<<"Stack is empty!\n";}
 else{
  for(int i=0 ; i<=Top; i++)
    cout<<Stack[i]<<" ";
   cout<<"\n";}}


int main(){
	int n;
	cout<<"Enter number of operations"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	cout<<"choose operation:"<<endl;
	cout<<"1)Push to the stack"<<endl;
	cout<<"2)Pop from the stack"<<endl;
	cout<<"3)check if stack is empty"<<endl;
	cout<<"4)return top element of the stack"<<endl;
	cout<<"5)display elements of stack"<<endl;
	int x;
	cin>>x;
	if(x==1){
		cout<<"Input value to be pushed"<<endl;
		int value;
		cin>>value;
		push(value);
	}
	else if(x==2){pop();}
	else if(x==3){if(isempty()){
		cout<<"True"<<endl;}
		else{
			cout<<"false"<<endl;
		}}
	else if(x==4) {
		show_top();}
	else{
		displayStack();
	}

}
}
