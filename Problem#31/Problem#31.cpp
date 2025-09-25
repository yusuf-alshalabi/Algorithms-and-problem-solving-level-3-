
/*
 
Question (31) :
Write a program to read a string and read acharacter 
then count the character in that string (Match case or not).

*/


#include <iostream>
#include <string>

using namespace std;

string readstring() {

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


char invertLetterCase(char c) {
    return (isupper(c)) ? tolower(c) : toupper(c);
}

short countLetter(char c, string s, bool MatchCase = true) {
    short counter = 0;
    if (MatchCase) {
        for (short i = 0; i < s.length(); i++) {
            if (s[i] == c)
                counter++;
        }
    }
    else {
        for (short i = 0; i < s.length(); i++) {
            if (s[i] == c || invertLetterCase(s[i]) == c)
                counter++;
        }
    }
    return counter;
}


int main()
{

    string s = readstring();
    char c = readCharacter();
    cout << "Letter \'" << c << "\' count = " << countLetter(c, s) << ".\n";
    cout << "Letter \'" << c << "\' or \'" << invertLetterCase(c) << "\' count = " << countLetter(c, s, false) << ".\n";



    system("pause>0");
}
