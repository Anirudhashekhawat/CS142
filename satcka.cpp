# include <iostream>
using namespace std;
//create a class stack 
class StackArr {
	public :
	int array[5];
	int top;
//construtor
StackArr(){
top = -1;
}

void push (int value)
{
	if(top > 4)
	{
	cout <<"stack overflow "<<endl;
	return ;
	}
	array [++top] = value;
	
}

void pop()
{
	if(top<0)
	{
	cout <<"stack underflow" <<endl;
	return ;
	}

	array[top --];

	}

bool isempty()
{
	  if(top == 0)
	{
	  cout <<"Stack is empty "<<endl;
	  return true;
 	}
  else{
     return false;
      }
  }


void Display()
{
	for(int i = top;i>0;i--)
	{
	cout <<array[i]<<endl;
	}
}
};

int main(){
StackArr s1;
s1.push(1);
s1.push(2);
s1.push(3);
s1.push(4);
s1.push(5);
s1.Display();
s1.pop();
s1.pop();
s1.Display();

return 0;
}

















