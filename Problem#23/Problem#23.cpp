
/*

Question (23) :
Write a program to read a string then print the first letter
of each word in that string.

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

void printFirstLetterForEachWordInString(string s) {
	bool isFirstLetter=true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ' && isFirstLetter) {
			cout << s[i] << endl;
		}
		isFirstLetter = (s[i] == ' ' ? true : false);
	}
}

int main() {

	printFirstLetterForEachWordInString(readString());


	system("pause>0");
}