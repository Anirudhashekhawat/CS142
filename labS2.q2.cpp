/*Write a class House which has the following data and functions : (you may add other function members to help you with the program) 
1. Name of the house (Data)
2. Address 
3. Rooms 
4. Setup  // Asks for entry of data to house)
5. Display // Displays the details of house - Name, Address, Rooms, Total area of the house (Sum of rooms), Also displays like "3 Bedroom, 1 Kitchen and 2 Bathroom. " - This should use the displays of the address and room class.
6. CopyHouse  // Takes input as a name and a another object of house as input and and copies all the details of the house except the name
*/

#include <iostream>
using namespace std ;

// NOW WE HAVE TO CREATE A CLASS ADDRESS
/*Address itself is a class; which stores the following data and functions
1. House Number (CString)
2. City (Cstring)
3. Zipcode (Number)
4. Setup // Asks the user to enter data for address and sets the address
5. Display // Displays the address */
 
class address {

	//ENTER DETAILS
		private :
			char city[20];
			char housenum[50];
		 	int zipcode;
		public :
			void input() ;
			void display();
		};
	
	//NOW WE HAVE TO SETUP OR TAKE INPUT
	void address :: input(){
		cout << "Enter name of the city :  " << endl;
		cin >> city;
		cout << "Enter house number : \n";
		cin >> housenum;
		cout << "Enter zipcode :  \n";
		cin >> zipcode;
	}

	//NOW WE HAVE TO DISPLAY DETAILS 
	void address :: display(){
		cout << "Name of city : " << city<<endl;
		cout << "House number : " << housenum<<endl;
		cout << "Zipcode : " << zipcode<<endl;
	}
	
	//	CREATE CLASS FOR PURPOSE
	

/*Room also is a class, which store the following data and functions
1. Length
2. Breadth
3. Height 
4. Purpose // Cstring to store "Kitchen, Bathroom, Bedroom etc"
5. Setup // Asks the user to enter data for rooms and sets the room
*/

	 
	 // WE HAVE TO CREATE FOR PURPOSE ALSO
	 
class purpose{
	private :
		int length;
		int breadth;
		int height;
		int info;
	public :
		void input();
		void display();
	};
	
	//GIVE THE INPUT N0W
	void purpose :: input(){
	cout << "Enter length of room :  \n ";
		 cin >> length;
		 cout << "Enter breadth of room :  \n" ;
		 cin >> breadth;
		 cout << "Enter height of room : \n" ;
		 cin >> height;
		cout << "Enter number of rooms for information : \n" ;
		cin >> info;
		}
		
	//CREATED CLASS PURPOSE INSTED OF ROOMS
	void purpose :: display(){
	switch (info) {
	case 4 : 
	cout << "You have 2 bedroom , 1 kitchen , 1 bathroom " ;
		break;
	case 5 : 
	cout << "You have 2 bedroom , 1 guest room , 1 kitchen , 1 bathroom " ;
		break;
	case 6 : 
	cout << "You have 3 bedroom , 1 guest room , 1 kitchen , 1 bathroom" ;
		break;
	case 7 :
	cout <<  "You have 3 bedroom , 1 guest room , 1 kitchen , 2 bathroom" ;
		break;
	default : 
	cout << "please enter number of rooms from 4 to 7 " ;
	}
	cout << "Your have - " << info << " rooms " << endl << " Having length :  " << length << "  breadth : " << breadth << " height : " << height <<endl << "Total area of all the rooms are : " << length*breadth*height;
}
	
// NOW WE HAVE TO CREATE A CLASS HOUSE
 
class House {

	//ENTER DETAILS

	private :
		char Nameh[50];
	 	int rooms;
	 	address add;
	 	purpose in;
	public :
		void input() ;
		void display();
	};
	
//NOW WE HAVE TO SETUP OR TAKE INPUT

	void House :: input(){
		cout << "Enter name of the house : \n ";
		cin >> Nameh;
		add.input();
		in.input();
	}

//NOW WE HAVE TO DISPLAY DETAILS
 
	void House :: display(){
		cout << "House name : " << Nameh<<endl;
		add.display();
		in.display();
	}
	
//Main 
int main(){
	House a;
	a.input();
	a.display();
	}
