
/*

Question (29) :
Write a program to read a string then count small/capital
letters in that string.

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

short countCapitalLetter(string S) {
    short count = 0;
    for (short i = 0; i < S.length(); i++) {
        if (isupper(S[i]))
            count++;
    }
    return count;
}

short countSmallLetter(string S) {
    short count = 0;
    for (short i = 0; i < S.length(); i++) {
        if (islower(S[i]))
            count++;
    }
    return count;
}

enum enWhatToCount { CapitalLetters = 0, SmallLetters = 1, All = 2 };

short CountLetters(string S, enWhatToCount whatToCount = enWhatToCount::All) {
    if (whatToCount == enWhatToCount::All)
        return S.length();
    else if (whatToCount == enWhatToCount::CapitalLetters)
        return countCapitalLetter(S);
    else
        return countSmallLetter(S);
}


int main()
{
    string S = readString();

    cout << "\n\n----------------------------------\n";
    cout << "\nString Length : " << S.length();
    cout << "\nCapital Letter Count : " << countCapitalLetter(S);
    cout << "\nSmall Letter Count : " << countSmallLetter(S);
    cout << "\n\n----------------------------------\n";
    cout << "\nString Length : " << CountLetters(S);
    cout << "\nCapital Letter Count : " << CountLetters(S, enWhatToCount::CapitalLetters);
    cout << "\nSmall Letter Count : " << CountLetters(S, enWhatToCount::SmallLetters);
    cout << "\n\n----------------------------------\n";


    system("pause>0");
}
