

/*

Question (50) :
Write a program to delete client by AccountNumber :

______________________________________________________
Example:
Please enter AccountNumber? 1234

The following are the client details:

Accout Number  : 1234
Pin Code       : 1234
Name           : Yusuf
Phone          : 098765
Account Balance: 888

Are you sure you want delete this client? y/n ? y
Client Deleted Successfully.
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
    bool MarkForDelete = false;
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

string convertRecordToLine(strClient clientData, string seperator = "#//#") {
    string Line = "";
    Line += clientData.AccountNumber + seperator;
    Line += clientData.PinCode + seperator;
    Line += clientData.Name + seperator;
    Line += clientData.Phone + seperator;
    Line += to_string(clientData.AccountBalance);

    return Line;
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
    string AccountNumber = "";
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

bool findClientByAccountNumber(string& accountNumber, vector<strClient>& vClient, strClient& client) {
    for (strClient c : vClient) {
        if (c.AccountNumber == accountNumber) {
            client = c;
            return true;
        }
    }
    return false;
}
void printClientCard(strClient Client) {
    cout << "\nThe following are the client details:\n";
    cout << "\nAccout Number  : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool isSureToDelete() {
    char isSure;
    cout << "\n\nAre you sure you want delete this client ? y / n ? ";
    cin >> isSure;
    return (isSure == 'Y' || isSure=='y');
}

bool markClientForDeleteByAccountNumber(string AccountNumber, vector <strClient>& vClients) {
    for(strClient& c:vClients){
        if (AccountNumber == c.AccountNumber) {
            c.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

vector <strClient> SaveCleintsDataToFile(string FileName, vector<strClient> vClients) {
    fstream MyFile;
    MyFile.open(FileName, ios::out);//over write
    string DataLine;
    if (MyFile.is_open()) {
        for (strClient c : vClients) {
            if (c.MarkForDelete == false) {
                //we only write records that are not marked for delete.  
                 DataLine = convertRecordToLine(c);   
                 MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}

bool deleteClientByAccountNumber(string accountNumber, vector<strClient>& vClients) {
    strClient client;
    if (findClientByAccountNumber(accountNumber, vClients, client)) {
        printClientCard(client);
        if (isSureToDelete()) {
            markClientForDeleteByAccountNumber(accountNumber, vClients);
            SaveCleintsDataToFile(ClientsFileName, vClients);
            vClients = LoadCleintsDataFromFile(ClientsFileName);
            cout << "\n\nClient Deleted Successfully."; 
            return true;
        }
    }
    else {
        cout << "\nClient with Account Number (" << accountNumber << ") is not Found!";
        return false;
    }
}

int main() {
    vector <strClient> vClient = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = readClientAccountNumber();
   
    deleteClientByAccountNumber(AccountNumber, vClient);

    system("pause>0");
    return 0;
}
