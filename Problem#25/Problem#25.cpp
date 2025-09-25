


/*

Question (25) :
Write a program to read a string then lowercase the first letter
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

string lowerFirstLetterOfEachWord(string s) {
	bool isFirstLetter = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ' && isFirstLetter) {
			s[i] = tolower(s[i]);
		}
		isFirstLetter = (s[i] == ' ' ? true : false);
	}
	return s;
}


//string lowerFirstLetterOfEachWord(string s) {
//
//	bool isFirstLetter = true;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] != ' ' && isFirstLetter) {
//			if(s[i]>=65 && s[i]<=90)
//			s[i] = s[i] + 32;
//		}
//		isFirstLetter = (s[i] == ' ');
//	}
//	return s;
//}




int main() {
	string s = readString();
	s = lowerFirstLetterOfEachWord(s);
	cout << "The string after converting to lower case : \n";
	cout << s << endl;


	system("pause>0");
}