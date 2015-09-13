/************************
Learn C++ by Making Games
Project 4.1 - Game of Funny Headlines
****************************/

#include <iostream>
#include <string>
using namespace std;




int main()
{

	//First, let's welcome the user
	cout << "Welcome to the C++ News Network!" << endl << endl;

	//Then, let's input several values to plug into our headlines.
	//Note that the queestions don't always match the names of the
	//variables because we are trying to surprise the player.
	string userName;
	cout << "Please type in your first name: " << endl;
	cin >> userName;

	int smallNumber;
	cout << "How many siblings do you have?" << endl;
	cin >> smallNumber;


	float largeNumber;
	cout << "How much money would yo like to earn every year?" << endl;
	cin >> largeNumber;

	string color;
	cout << "Tell us your least favorite color:" << endl;
	cin >> color;

	string amorphousObject;
	cout << "Which vegetables have the weirdest shapes?" << endl;
	getline(cin, amorphousObject);

	string deadGuy;
	cout << "Name a famous dead person:" << endl;
	getline(cin, deadGuy);

	

}