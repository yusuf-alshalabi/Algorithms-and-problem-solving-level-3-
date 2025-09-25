
/*

Question (32) :
Write a program to read a character 
,then check if it is a Vowel or not 
(Vowels are : a , e ,i , o , u).

*/


#include <iostream>
#include <string>

using namespace std;

char readCharacter() {
	char c;
	cout << "Please enter your character : ";
	cin >> c;
	
	return c;
}

bool isVowel(char c) {
    c = tolower(c);
    return ((c == 'a') || (c == 'i') || (c == 'e') || (c == 'o') || (c == 'u'));
}


int main()
{
    char c = readCharacter();
    if (isVowel(c))
        cout << "Yes,Letter \'" << c << "\' is vowel.\n";
    else
        cout << "No,Letter \'" << c << "\' is NOT vowel.\n";





    system("pause>0");
}
