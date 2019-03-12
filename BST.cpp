# include <iostream>
using namespace std;

class Node                                       //CLASS TO DEFINE NODE 
{
   public:
	int data;
	Node * left;
	Node * right;

	Node(int value)
	{
		data = value;
		left = NULL;
		right = NULL;

	}

};

class BST                                       //CREATE CLASS BST
{
   public:
	Node * root;

	BST()
	{
		root = NULL;
	}


	void Insert(int value)
	{
		InsertHelper(root,value);                         // TO MAKE EASY FOR USER

	}

void InsertHelper(Node * curr , int value)
{
//BASE CASE TO CHECK WHETHER ROOT IS NULL OR NOT

if(root == NULL)
	{
		root = new Node(value);
	}

else if (value < curr->data)                    //MAKE SURE TO FOLLOW THE CORRECT CONVECTION
{
	if(curr->left == NULL)
	curr->left = new Node(value);           

	else
	InsertHelper(curr->left,value);         //FOR RECURSION
}


else                     //NOW CASE FOR RIGHT ONE 
{
	if(curr->right == NULL)
	curr->right = new Node(value);           

	else
	InsertHelper(curr->right,value);

}

}


void DisplayHelper(Node * curr)
{
	if(curr->left != NULL) 
	{
		DisplayHelper(curr->left);
	}

	cout << curr->data << "," ; 

	if(curr -> right != NULL)
	{
		DisplayHelper(curr->right);
	}
}

void Display()
	{
		if(root == NULL)
		cout << "TREE IS EMPTY " ;
		DisplayHelper(root);
		cout << endl;
	}

Node * search (Node * curr , int value)
{

	if(curr == NULL || curr->data == value) return curr;
	else if(value < curr->data) return search(curr ->left , value);
	else return search (curr->right ,value) ;

}



};

int main()
{
	BST b1;
	b1.Insert(10);
	b1.Insert(5);
	b1.Insert(4);
	b1.Insert(3);
	b1.Insert(2);
	b1.Insert(11);
	b1.Insert(12);
	b1.Insert(13);
	//Node * b1 = search(1);

return 0;
}























