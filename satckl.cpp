# include <iostream>
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

class stackLL
{
public :
node * top,*tail;

	//constructor
	stackLL()
	{
	tail=NULL;
	top  = NULL;
	}

void Push(int value)
{
node * temp = new node;
temp ->data = value;

	if(top ==NULL)
	{
	//temp->next = top;
	top=temp;
	tail=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}

void Pop()
{
node * temp ;

	if(top== NULL)
	{
	cout << "Stack iss empty" ;
	}
	temp=top;
	top = top->next;
	delete temp ;
}

bool isempty(){
  if(top==NULL){
  cout<<"Stack is empty."<<endl;
  return true;
  }
  else{
     return false;
      }
  }

void Display()
{
node * temp = top;
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
stackLL s1;
s1.Push(1);
s1.Push(2);
s1.Push(3);
s1.Push(4);
s1.Display();
s1.Pop();
s1.Display();

return 0;
}//temp->next = NULL;
