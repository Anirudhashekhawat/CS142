# include <iostream>
using namespace std;

//NOW WE HAVE TO CREATE A LINKED LIST
//WE KNOW ABOUT NODE THAT IT HAS TWO PARTS : a. DATA b.NEXT
//CREATE A STRUCTURE NODE

struct node
   { 
	int data;
	node * next;

//CONSTRUCTOR THAT MAKES PTR NULL

	node(){
	next = NULL;
		}
	};

//The second and the most important part of a linked list is to always keep the track of the first nodebecause 
//access to the first node means access to the entire list. So, let’s call our first node as ‘ head’.

//CREATE A CLASS LINKEDLIST

class Linkedlist{
	private :
		node *head,*tail;
	public :

//construcor

	Linkedlist()
	   {
		head = NULL;
		tail = NULL;
	   }

//CREATE A FUNCTION OF ADDING NODE IN OUR LINKED LIST

void insert(int n){

// WE ARE ALLOCATING THE SPACE REQUIRED FOR THE NODE BY THE NEW OPERATOR

	node *temp = new node;

	//WE ARE GIVING THE VALUE TO DATA OF TEMP AS PASSED TO THE FUNCTION

	temp -> data = n;

	temp ->next = NULL;

//JOIN NODES AND CREATE LINKED LIST

	if(head == NULL)
	  {
		head = temp;
		tail = temp;
	  }
	else
	  {
		tail ->next= temp;
		tail=tail->next;
	  }

	}

//FOR INSERTING AT POSITIONS

void insertat(int pos,int n){
	node * current = head;
	int i =1;
	   while(i < pos-1){
	   current = current -> next;
	   i++;
	}

//NODE FOR NEW

	node * temp = new node;
	temp -> data = n;

//MOVING PTRS
	temp -> next = current -> next;
	current ->next=temp;
	}

//FOR DELETING NODES

void dele(){

//TEMP STORE TAIL

	node * temp = tail;
	node * current = head;
		while(current -> next!=tail){
		current = current ->next;
	}

	current -> next = NULL;

//UPDATION OF TAIL

	tail = current;
	delete temp;
	}

// DELETE AT POSITON

void deleat(int pos){
	node * current = head;
	int i = 0;
		while(i < pos-2)
	{

	current = current ->next;
	i++;
	}

//REACH AT THE POSITION

	node * temp = current;
	i= 1;
	   while (i< pos){
	   current = current ->next;
	   i++;
	}

//MOVING PTRS
	
		temp ->next = current->next;
		current -> next= temp;
		delete current;
	}


//FOR COUTING

void couit(){
	node * current = head;
	int i =0;
	 while (current != NULL){
         i++;

current=current->next;

	}

cout << "NUMBER OF ITEMS IN THE LINKED LIST IS : "<<i<<endl;

	}

//DISPLAY

void display(){
	node *current = head;
	while (current != NULL){
	cout <<current ->data <<"->";
	current=current->next;
	
	}

	cout <<endl;

	}

};

int main()
{
	Linkedlist a;
	a.insert(1);
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.display();
	a.couit();
	a.dele();
	a.display();
	a.couit();
	a.insertat(2,7);
	a.display();
	a.couit();
	a.deleat(2);
	a.display();
	a.couit();
	
    return 0;
}
