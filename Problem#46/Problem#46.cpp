

/*

Question (46) :
Write a program to convert line data to record and print it.

Note : The client data is :
       -Account Number.
       -PinCode.
       -Name.
       -Phone.
       -Account Balance.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct strClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

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

strClient convertLinetoRecord(string stLine,string seperator="#//#") {
    strClient client;
    vector<string> vstLine = splitString(stLine, seperator);
    
    client.AccountNumber = vstLine[0];
    client.PinCode = vstLine[1];
    client.Name = vstLine[2];
    client.Phone = vstLine[3];
    client.AccountBalance = stod(vstLine[4]); //cast string to double.

    return client;
}

void printClientRecord(strClient Client) {
    cout << "\n\nThe following is the extracted client record:\n";  
    cout << "\nAccout Number  : " << Client.AccountNumber;  
    cout << "\nPin Code       : " << Client.PinCode;   
    cout << "\nName           : " << Client.Name; 
    cout << "\nPhone          : " << Client.Phone; 
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

int main() {
    string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000"; 
    cout << "\nLine Record is:\n"; 
    cout << stLine;
    strClient Client = convertLinetoRecord(stLine);
    printClientRecord(Client);


    system("pause>0");
}