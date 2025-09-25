
/*

Question (43) :
Write a program to replace words in string using custom function 
with match case and without match case.

*/


#include <iostream>
#include <vector>

using namespace std;

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

string joinString(vector<string> vString, string delim) {
	string S = "";
	for (string& s : vString) {
		S = S + s + delim;
	}
	return S.substr(0, S.length() - delim.length());
}

string lowerAllString(string s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	return s;
}

string replaceWordInStringUsingCustomFunction(string S1, string wordToReplace, string replaceTo,bool matchCase=1) {
	vector <string> vS = SplitString(S1, " ");
	string sAfterReplace = "";
	if (matchCase) {
		for (string& s : vS) {
			if (s == wordToReplace) {
				s = replaceTo;
			}
		}
	}
	else {
		for (string& s : vS) {
			if (lowerAllString(s) == lowerAllString(wordToReplace)) {
				s = replaceTo;
			}
		}
	}
	sAfterReplace = joinString(vS, " ");
	return sAfterReplace;
}

int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string ReplaceTo = "Damascuse";
    cout << "\nOrigial String:\n" << S1 <<".\n";
	cout << "Replace \"jordan\" to \"Damascuse\".\n\n";
    cout << "\n\nString After Replace with match case:\n";
    cout << replaceWordInStringUsingCustomFunction(S1, StringToReplace, ReplaceTo);
	cout << "\n\nString After Replace without match case:\n";
	cout << replaceWordInStringUsingCustomFunction(S1, StringToReplace, ReplaceTo,0);

    system("pause>0");
}
