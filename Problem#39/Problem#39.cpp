

/*

Question (39) :
Write a program to join vector of strings
into a one string with seperators.

*/

#include <iostream>
#include <vector>

using namespace std;

string joinString(vector<string> vString, string delim) {
	string S = "";
	for (string& s : vString) {
		S = S + s + delim;
	}
	return S.substr(0, S.length() - delim.length());
}

int main()
{
	vector <string> vString = { "Ahmed","Khaled","Yusuf" };
	string delim = "  ";
	cout << joinString(vString, delim) << ".\n";


	system("pause>0");
}

