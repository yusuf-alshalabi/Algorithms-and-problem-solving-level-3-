

/*

Question (38) :
Write a program to read a string
,then trim left , right , all.

*/


#include <iostream>
#include <string>

using namespace std;

string  readString() {
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}


string trimLeft(string S1) {
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != ' ') {
			return S1.substr(i, S1.length() - i);
		}
	}
	return"";
}

string trimRight(string S1) {
	for (int i = S1.length() - 1; i >= 0; i--) {
		if (S1[i] != ' ') {
			return S1.substr(0, i + 1);
		}
	}
	return"";
}

string trim(string S1) {
	return(trimRight(trimLeft(S1)));
}

int main()
{

    string S1;
	//S1 = readString();
	S1 = "    Yusuf Zakaria Alshalabi   ";

	cout << "String = " << S1 << ".\n";
	cout << "Trim Left = " << trimLeft(S1) << ".\n";
	cout << "Trim Right = " << trimRight(S1) << ".\n";
	cout << "Trim = " << trim(S1) << ".\n";






	system("pause>0");
}

