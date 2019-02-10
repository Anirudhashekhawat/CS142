# include <iostream>
#include <stdlib.h>
using namespace std;

// create node
class node 
{
public :
int data;
node * next ;

	//constructor
	node()
	{
	next = NULL;
	}
};

class queueLL
{
public :
node * front , *rear;

	//constructor
	queueLL()
	{
	front  = NULL;
	rear = NULL;
	}

//for insertion
void Enque(int value)
{
node * temp = new node;
temp ->data = value;

	if(front == NULL)
	{
	front=temp;
	rear=temp;	}
else
{
rear->next = temp;
rear = temp;
}
}

//for deletion
void Deque()
{

	if(front == rear)
	{
	front=rear=NULL;
	}
	else
	front=front->next;
}

//if empty
void isempty()
{
	if(front==NULL)
	{
	cout<<"Queue is empty"<<endl;
	}
  
}

//for display
void Display()
{
node * temp = front;
	while (temp!=NULL)
	{
	cout << temp->data <<endl;
	temp=temp->next;
	} 

   cout <<endl;
}

};


int main()
{
queueLL q1;
q1.Enque(1);
q1.Enque(2);
q1.Enque(3);
q1.Enque(4);
q1.Display();
q1.Deque();
q1.Deque();
q1.Display();

return 0; 
}
