


/*

Question (27) :
Write a program to read a character then invert it's case
and print it.

*/

#include <iostream>
#include <string>

using namespace std;

char readChar() {
	char c;
	cout << "Please enter your character : ";
	cin >> c;
	return c;
}

char invertLetterCase(char c) {
	return (isupper(c)) ? tolower(c) : toupper(c);
}


int main()
{
	char c = readChar();
	cout << "\nChar after inverter case is : \n";
	c = invertLetterCase(c);
	cout << c << "\n";




	system("pause>0");
}
