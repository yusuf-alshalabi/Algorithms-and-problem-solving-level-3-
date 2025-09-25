
/*

Question (30) :
Write a program to read a string and read a character
then count the character in that string.

*/


#include <iostream>
#include <string>

using namespace std;

string readString() {

    string s;
    cout << "\nPlease enter your string : \n";
    getline(cin, s);

    return s;
}

char readCharacter() {
    char c;
    cout << "\nPlease Enter the character : \n";
    cin >> c;

    return c;
}

short countLetterInString(char c, string s) {
    short counter = 0;
    for (short i = 0; i < s.length(); i++) {
        if (s[i] == c)
            counter++;
    }
    return counter;
}

int main()
{

    string s = readString();
    char c = readCharacter();
    cout << "Letter '" << c << "' count = " << countLetterInString(c, s) << ".\n";

    system("pause>0");
}