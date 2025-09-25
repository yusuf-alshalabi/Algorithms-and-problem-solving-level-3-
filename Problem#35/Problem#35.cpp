

/*

Question (35) :
Write a program to read a string
,then print each word in that string.

*/

#include <iostream>
#include <string>

using namespace std;

string readString() {
	string s;
	cout << "Please enter your string :";
	getline(cin, s);

	return s;
}


void printEachWordInString(string S1) {

	string delim = " "; // delimiter 
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable  
	// use find() function to get the position of the delimiters 

	while ((pos = S1.find(delim)) != std::string::npos) {
		sWord = S1.substr(0, pos); // store the word   
		if (sWord != "") {
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length()); /* erase() until positon
											  and move to next word. */
	}

	if (S1 != "") {
		cout << S1 << endl; // it print last word of the string.
	}

}


int main() {
	printEachWordInString(readString());


	system("pause>0");
}

