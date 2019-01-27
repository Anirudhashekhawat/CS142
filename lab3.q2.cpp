# include <iostream>
using namespace std;

class node{
public :
	int data;
	node* next;

//constructor

node(int value){
	next = NULL;
	data = value;
	}
};

//creating a class

class circll{
public :
	node * head;

//constructor
	circll(){
	head = NULL;
	}

//insert
void insert(int value){
	node * temp = new node(value);
		if (head = NULL){
		head = temp;
		}
		else{
		node * curr = head;
		while(curr->next!=head){
		curr = curr ->next;
	}
		curr->next=temp;
	}
		temp->next=head;
	}

//display
void display(){
	node * curr = head;
	if (head = NULL){
	cout <<"No elements "<<endl;
	}

	else if(head ->next==head){
	cout << head->data<<endl;
	}

	else{
	while(curr->next!=head){
	cout <<curr->data<<"->";
	curr=curr->next;
	}
	cout << curr-> data;
	cout<<endl;
	}
	}

//to insert at position

void Insertat(int value,int pos){
	node * curr = head;
	int i=1;
	while(i<pos-1){
	curr = curr->next;
	i++;
	}

node * temp = new node(value);
temp ->next=curr->next;
curr->next=temp;

}

//delete at position
void Deleteat(int pos){
	node * curr = head;
	int i=1;
	while(i<pos-1){
	curr=curr->next;
	i++;
	}
	node*temp;
	temp= curr->next;
	curr->next=curr->next->next;
	delete temp;
	}

void delet(){
	node * curr = head;
	node*temp;
	//if there is no element
	if (head == NULL){}
	else if (head->next==head){
	head= NULL;
	delete  head;
	}
	else if(head->next==head){
	head=NULL;
	delete head;
	}

//if 2 elements
	else if (head->next->next==head){
	temp=head->next;
	head=temp->next;
	head->next=head;
	delete temp;
	}

//for others
	else{
	while(curr ->next->next!=head){
	curr=curr->next;
	}
	temp = curr->next;
	}
	temp=curr->next;
	curr->next=curr->next->next;
	delete temp;
	}
	}

//to count items
void countit(){
	node * curr = head;
	if(head==NULL){
	cout <<"No elements in CLL"<<endl;
	}
	else if (head->next==head){
	cout <<"no elements in CLL in 1"<<endl;
	}

	else{
		int i = 1;
		while(curr->next!=head){
		i++;
		curr=curr->next;
	}

	cout << "no. of elements in CLL is "<<i<<endl;

	}

	}

	};



int main(){
circll cl1;
cl1.insert(1);
cl1.insert(2);
cl1.insert(3);
cl1.insert(4);
cl1.display();
cl1.Insertat(9,3);
cl1.display();
cl1.Deleteat(3);
cl1.display();
cl1.delet();
cl1.display();
cl1.countit();
return 0 ;
}























 




























