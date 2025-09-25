


/*

Question (41) :
Write a program to read string and reverse its words.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string readstring() {

	string s;
	cout << "\nPlease enter the string : \n";
	getline(cin, s);

	return s;
}

vector<string> SplitString(string S1, string delim) {
	vector <string> split;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(delim)) != std::string::npos) {
		sWord = S1.substr(0, pos);
		if (sWord != "") {
			split.push_back(sWord);
		}
		S1.erase(0, pos + delim.length());

	}

	if (S1 != "") {
		split.push_back(S1);
	}

	return split;
}


string reverseWordsInString(string S1) {
	string S2 = "";
	string delim = " ";

	vector<string> vString = SplitString(S1, delim);

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin()) {

		--iter;
		S2 += *iter + delim;
	}
	S2 = S2.substr(0, S2.length() - delim.length());
	//remove last space.
	return S2;
}

int main()
{
	string Words = readstring();
	cout << "String after reversing word : \n";
	cout << reverseWordsInString(Words);

	system("pause>0");
}

