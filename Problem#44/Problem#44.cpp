
/*

Question (44) :
Write a program to remove all punctuations from a string.

*/

#include <iostream>
#include <cctype>

using namespace std;
string removePuncuationsFromString(string S1) {
	string S2="";
	for (short i = 0; i < S1.length(); i++) {
		if (!ispunct(S1[i])) {
			S2 = S2 + S1[i];
	    }
	}
	return S2;
}
// Another way :

/* 
string removePuncuationsFromString(string S1) {
	for (short i = 0; i < S1.length(); i++) {
		if (ispunct(S1[i])) {
			S1.erase(i, 1);
			i--;
		}
	}
	return S1;
}
*/

int main(){
	string s = "Welcome to Damascuse ,Damascuse is a nice country ; it's amazing.";
	cout << "The original string is : \n";
	cout << s << "\n";
	cout << "\nThe string after remove all puncuations is : \n";
	cout<<removePuncuationsFromString(s);
	system("pause>0");
}