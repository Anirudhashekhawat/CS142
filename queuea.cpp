# include <iostream>
#include <stdlib.h>
using namespace std;

class queuearr{
	public :
	int array[5];
	int rear,front;

//constructor
queuearr(){
rear = -1;
front = -1;
}

//For insertion
void Enque(int value)
{
	if(rear > 4)
	{
	cout << "queue overflow" <<endl ;
	front=rear=-1;
	return ;
	}

array[++rear] = value;

}

//for deletion

void Deque() 
{
	if(front == rear)
	{
	cout << "queue underflow" <<endl;
	return ;
	}

array[++front] ;
}

//when empty
void isempty(int top)
{
	if(top==0)
	{
	cout<<"Queue is empty."<<endl;
	}
}

//for display
void Display()
{
	if(rear == front)
	{
	cout <<"queue empty " <<endl;
	return ;
	}

for(int i=front+1 ;i<=rear;i++)
cout <<array[i]<<endl; 
}

};
int main(){
queuearr q1;
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













