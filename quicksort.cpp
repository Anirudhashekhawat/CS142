#include <iostream>
using namespace std;

//Partiton
int partition(int arr[],int piviot , int start , int end)
{
	for(int i=start;i<end;i++){
	int temp;
	if(arr[i] > arr [piviot])
	{

	temp= arr[i];
	arr[i]=arr[piviot];
	arr[piviot]=temp;  
	}
}

return piviot ;

}

//quick sort function
void Qsort(int arr[], int start , int end)
{
	if(start < end)
	{
	int piviot = end;
	int p = partition(arr,piviot,start,end) ;
	Qsort(arr,0,p-1);
	Qsort(arr,p+1,end);
	}
}

int main()
{

int arr[30];int size;
cout <<"enter size of array : "<<endl;
cin >> size;
cout << "Enter elements of array : " <<endl;

	for(int i=0;i<size;i++)
	{
	cin >> arr[i];
	}

cout<<"Array after sorting : "<<endl;
Qsort(arr,0,size-1);
	for(int i=0;i<size;i++)
	{
	cout<<arr[i];
	}
}

