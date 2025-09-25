
/*

Question (28) :
Write a program to read a string then invert all it's
letter's case and print it.

*/




#include <iostream>
#include <string>

using namespace std;

string readString() {
	string s;
	cout << "Please enter your string : ";
	getline(cin, s);
	return s;
}

char invertLetterCase(char c) {
	return (isupper(c)) ? tolower(c) : toupper(c);
}

string invertStringCase(string s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = invertLetterCase(s[i]);
	}
	return s;
}

int main()
{
	string s = readString();
	cout << "\string after inverter case is : \n";
	s = invertStringCase(s);
	cout << s << "\n";

	


	system("pause>0");
}
