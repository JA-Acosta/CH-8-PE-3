// JAAR
// 06/05/2023
// C++ Primer Plus 6th Ed
// CH 8 Program Ex 3
// Version 2

// Updates:
// +toupper function

// Potential Use cases/errors:

// ------------------------------ Prompt---------------------------------------
// Create a function that will take some string and return an all caps version
// have the program loop and ask the user for several inputs.
// ------------------------------ Prompt---------------------------------------

// Headers:
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Prototypes:
void toupper(string& str);


int main()
{
	cout << "Enter a word or phrase and I will return it all-caps.\n\n";
	
	// !Assume Response is either yes or no
	string response;
	do
	{
		string phrase;
		cout << "\tEnter a word or phrase: ";
		getline(cin, phrase);
		toupper(phrase);
		cout << phrase << "\n";
		cout << "Do you want to enter another phrase?: ";
		cin >> response;
		toupper(response);
	} while (response == "YES");

	cout << "\tDONE\n";
}


// takes each letter in a word or phrase and capitalizes it.
// Param: string & str
void toupper(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str.at(i) = toupper(str.at(i));
	}
}

// TODO: Create tolower function