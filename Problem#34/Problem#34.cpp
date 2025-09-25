

/*

Question (34) :
Write a program to read a string
,then print all Vowels in that string
(Vowels are : a , e ,i , o , u).

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

bool isVowel(char c) {
	c = tolower(c);
	return ((c == 'a') || (c == 'i') || (c == 'e') || (c == 'o') || (c == 'u'));
}

void printVowels(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (isVowel(s[i]))
			cout << s[i] << "   ";
	}
}

int main()
{
	string s = readString();

	printVowels(s);




	system("pause>0");
}
