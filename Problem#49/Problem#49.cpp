

/*

Question (49) :
Write a program to find client by AccountNumber and print it on the screen: 

______________________________________________________
Example:
Please enter AccountNumber? 1234

The following are the client details:

Accout Number  : 1234
Pin Code       : 1234
Name           : Yusuf
Phone          : 098765
Account Balance: 888
______________________________________________________

Please enter AccountNumber? 4444

Client with Account Number (4444) is Not Found!


*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

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

strClient convertLinetoRecord(string Line, string Seperator = "#//#") {
    strClient Client;
    vector<string> vClientData;
    vClientData = splitString(Line, Seperator);
    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);//cast string to double
    return Client;
}

vector<strClient> LoadCleintsDataFromFile(string fileName) {
    vector <strClient> vClients;
    fstream myFile;
    myFile.open(fileName, ios::in); //read only.
    if (myFile.is_open()) {
        string Line;
        strClient Client;
        while (getline(myFile, Line)) {
            Client = convertLinetoRecord(Line);
            vClients.push_back(Client);
        }
        myFile.close();
    }
    return vClients;
}

string readClientAccountNumber() {
    string AccountNumber="";
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

bool findClientByAccountNumber(string& accountNumber,vector<strClient>& vClient,strClient& client) {
    for (strClient c : vClient) {
        if (c.AccountNumber == accountNumber) {
            client = c;
            return true;
        }
    }
    return false;
}
void PrintClientCard(strClient Client) {
    cout << "\nThe following are the client details:\n";  
    cout << "\nAccout Number  : " << Client.AccountNumber; 
    cout << "\nPin Code       : " << Client.PinCode;   
    cout << "\nName           : " << Client.Name;   
    cout << "\nPhone          : " << Client.Phone;   
    cout << "\nAccount Balance: " << Client.AccountBalance;
}


int main() { 
    vector <strClient> vClient= LoadCleintsDataFromFile(ClientsFileName);
    strClient Client;
    string AccountNumber = readClientAccountNumber(); 
    if (findClientByAccountNumber(AccountNumber, vClient, Client)) { 
        PrintClientCard(Client);
    }
    else {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
    } 


    system("pause>0");
    return 0;
}
