

/*

Question (40) :
Write a program to join array of strings
into a one string with seperators.

*/

#include <iostream>
#include <vector>

using namespace std;

string joinString(string array[], short length, string delim) {
	string S = "";
	for (short i = 0; i < length; i++) {
		S = S + array[i] + delim;
	}
	return S.substr(0, S.length() - delim.length());
}


int main()
{
	string array[] = { "Ahmed","Khaled","Yusuf" };
	string delim = ",";
	cout << joinString(array, 3, delim) << ".\n";



	system("pause>-");
}
