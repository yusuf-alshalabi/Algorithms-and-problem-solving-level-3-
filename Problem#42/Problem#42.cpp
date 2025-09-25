

/*

Question (42) :
Write a program to replace words in string using built in function.

*/

#include <iostream>

using namespace std;

string replaceWordInStringUsingBuiltInFunction(string S1, string wordToReplace, string replaceTo) {
    short pos = S1.find(wordToReplace);

    while (pos != std::string::npos) {
        S1 = S1.replace(pos, wordToReplace.length(), replaceTo);
        pos = S1.find(wordToReplace);
    }
    return S1;
}

int main()
{
    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "Damascuse";
    cout << "\nOrigial String:\n" << S1<<"\n";
    cout << "\nString After Replace:\n";
    cout << replaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

    system("pause>0");
}
