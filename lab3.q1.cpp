# include <iostream>
using namespcae std;

// CREATE CLASS
struct node{
	int data;
	node * next;
	node * prev;

//CONSTRUCTOR
	node() {
	next = NULL;
	prev = NULL;
	}

class Doublell{
	public :
		node * head;
		node * tail;
//CONSTRUCTOR
	doublell(){
	head = NULL;
	tail = NULL;
	}
void insert(int value){
//create  node
	node * temp = new node(value);
//for one node
	if (head == NULL){
	head = temp;
	}
// for othera
	else {
	node * curr = head;
	while(curr -> next!=NULL){
	curr=curr->next;
	}

	curr->next=temp;
	temp->prev=curr;
	}

}

//to display
void display(){
//declare node
	node * curr = head;
	node * last ;
	cout << "Print elements : " ;
// now loop
	while (curr !=NULL){
	cout << curr ->data <<"->" ;
	last = curr;
	curr = curr -> next;
}
cout << "NULL"<<endl;
}

// to insert at  position
void insertp(int pos , int value){
	cout <<"insert " << value << "at pos. no ." << pos<< endl;
	node * curr = head;
	int i = 1;
	//reach place
	while (i < pos-1){
	curr=curr->next;
	i++;
}
//create node
	node * temp = new node(values);
//moving ptrs
	temp -> next = curr ->next;
	curr ->next = temp;
	temp ->prev= curr;
	temp->next->prev = temp;
}
// to dele at position
void deleat(int pos){
	cout << "delete the elements at position "<<pos<<endl;
	node * curr = head;
	int i = 1;
	while (i<pos-1){
	curr = curr->next;
	i++;
}

	curr -> next = curr-> next ->next;
	curr -> next->prev=curr;

}
// dele last element
void del(){
	cout <<"delete the last element"<<endl;
	//pointer
	node * curr = head;
	node * temp;
	if (head == NULL){
	}
	else if (head ->next->next != NULL){
	head = NULL;
	}
	else(
	while(curr ->next->next!=NULL){
	curr=curr->next;
	}
	curr->next=temp;
	curr->next=NULL;
	delete temp;
	}
	}

// count no. of items
void ci(){
	node * curr = head;
	int i;
	while(curr !=NULL){
	curr = curr ->next;
	i++;
	}

cout << "No.of elements in the dll is "<<i<<endl;

}

};

int main(){
	doublell dl1;
	for(int i = 1; i < 11;i++){
	dl1.insert(i);
}
	dl1.insert(i);
}
	dl1.display();
	dl1.insertp(3,11);
	dl1.display();
	dl1.deleat(3);
	dl1.del();
	dl1.display();
	dl1.ci();
	return 0 ;
}

















































































































