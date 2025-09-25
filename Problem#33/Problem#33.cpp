
/*

Question (33) :
Write a program to read a string
,then count all Vowels in that string
(Vowels are : a , e ,i , o , u).

*/



#include <iostream>
#include <string>

using namespace std;

string readString() {
    string s;
    cout << "Please enter your string : ";
    getline(cin, s);

    return s;
}

bool isVowel(char c) {
    c = tolower(c);
    return ((c == 'a') || (c == 'i') || (c == 'e') || (c == 'o') || (c == 'u'));
} 

short countVowelLetter(string s) {
    short counter = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i]))
            counter++;
    }
    return counter;
}

int main()
{
    string s = readString();
    cout << "Numbers of Vowels is : " << countVowelLetter(s) << ".\n";




    system("pause>0");
}
