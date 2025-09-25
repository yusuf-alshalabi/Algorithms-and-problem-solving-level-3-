

/*

Question (37) :
Write a program to read a string
,then make a function to split 
each word in vector.

*/


#include<string>
#include<iostream>
#include<vector>

using namespace std;


string  readString() {
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

vector<string> splitString(string S1, string delim) {
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

void printSplit(vector<string> vector) {
	for (string& s : vector) {
		cout << s << endl;
	}
}

int main()
{
	string S1 = readString();
	vector <string> split = splitString(S1, " ");
	cout << "Tokens = " << split.size() << endl;

	cout << "Your string words : " << endl;
	printSplit(split);




	system("pause>0");
}
