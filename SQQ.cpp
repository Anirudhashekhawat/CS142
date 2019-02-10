#include <iostream>
#include "queuel.cpp"
using namespace std;
class stack{
	public:
	queuel q1;
	node*top;
	stack(){
  		top=NULL;
  		}
  		// no element 
	void isempty(){
  		if(top==NULL){
    		cout<<"Stack is empty."<<endl;
  			}
		}
		//push last element 
void push(int data){
		q1.enque(data);
 		}
 		//CountItems 
int size(){ 
		q1.size();
		}
void pop(){
	    int arr[100];
	    //dequeue from front till NULL 
	    arr[0]=q1.dequeue();
	    arr[1]=q1.dequeue();
	    arr[2]=q1.dequeue();

q1.enque(arr[0]);	    //q1.enqueue(arr[0]);
q1.enque(arr[1]);
		} 
void Display(){
q1.Display();
  		}
void top(){
int arr[50];
arr[0]=q1.dequeue();
q1.top();
		}
  };
int main(){
	stack s1;
	s1.isempty();
	cout<<"Push elements:"<<endl;
	for(int i=0;i<3;i++){ 
	s1.Push(i);
	s1.Display();
	}
	s1.size();
	s1.Pop();
	cout<<"Displaying elements after one pop:"<<endl;
	s1.Display();
	s1.size();
	s1.top();
	
return 0;
}
