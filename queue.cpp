#include <iostream>
using namespace std;

const int Size=10;
int Queue[Size]={};
int Top=-1;
int Rear=-1;

void Enqueue(int val){
	if(Rear==Size-1){cout<<"Overflow"<<endl;}
	else if(Top==-1 && Rear==-1){
		Top=0;
		Rear=0;}
	else{Rear++;}
	Queue[Rear]=val;
	return;}\

void Dequeue(){
	if(Top==-1 || Top>Rear){
		cout<<"Underflow"<<endl;
	return;}
	Top++;
	return;}

void front(){
	if(Top==-1|| Top>Rear){
		cout<<"Underflow"<<endl;}
	else{cout<<"The Front Value is:"<<Queue[Top]<<endl;}
}

void isEmpty(){
	if(Top==-1 || Top>Rear){cout<<"True"<<endl;
	return;}
	else{cout<<"False"<<endl;
return;}}

void Display(){
	if(Top==-1 || Top>Rear){cout<<"Queue Empty"<<endl;
return;}
	else{
		cout<<"The Queue is :"<<endl;
		for(int i=Top;i<=Rear;i++){
			cout<<Queue[i]<<' ';
		}
		cout<<endl;
	}

}
int main(){
	int n,x,val;
	cout<<"Enter number of operations:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	cout<<"1)Enqueue"<<endl;
	cout<<"2)Dequeue"<<endl;
	cout<<"3)Front"<<endl;
	cout<<"4)isEmpty"<<endl;
	cout<<"5)Display"<<endl;
	cin>>x;
	if(x==1){
		cout<<"Enter Value to be added:"<<endl;
		cin>>val;
		Enqueue(val);}
	else if(x==2){Dequeue();}
	else if(x==3){front();}
	else if(x==4){isEmpty();}
	else {Display();}
}
}