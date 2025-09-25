
/*

Question (26) :
Write a program to read a string then upper all letters,
then lower all letters, and print them.

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

string lowerAllLetter(string s) {
	for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
	}
	return s;
}

string upperAllLetter(string s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
	return s;
}


int main() {
	string s = readString();

	cout << "\n\nThe string after converting to lower all : \n";
	s = lowerAllLetter(s);
	cout << s;

	cout << "\n\nThe string after converting to upper all : \n";
	s = upperAllLetter(s);
	cout << s;

	system("pause>0");
}