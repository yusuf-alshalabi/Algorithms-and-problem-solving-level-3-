
/*

Question (47) :
Write a program to ask you to enter clients and save them to file.

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
#include <fstream>

using namespace std;

const string ClientsFileName = "Clients.txt";

struct strClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

strClient readClientData() {
    strClient clientData;
    cout << "Enter Account Number? ";
    getline(cin>>ws, clientData.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin, clientData.PinCode);
    cout << "Enter Name? ";
    getline(cin, clientData.Name);
    cout << "Enter Phone? ";
    getline(cin, clientData.Phone);
    cout << "Enter AccountBalance? ";
    cin >> clientData.AccountBalance;

    return clientData;
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

void AddDataLineToFile(string FileName, string stDataLine) {
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);
    if (MyFile.is_open()) {
        MyFile << stDataLine << endl;        
        MyFile.close();
    } 
}

void AddNewClient() {
    strClient Client;
    Client = readClientData();
    AddDataLineToFile(ClientsFileName, convertRecordToLine(Client));
}

void AddClients() { 
    char AddMore = 'Y'; 
    do { 
        system("cls");  
    cout << "Adding New Client:\n\n";        
    AddNewClient();      
    cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";    
    cin >> AddMore;
    }
    while (toupper(AddMore) == 'Y');
}

int main() {
    
    AddClients();

    system("pause>0");
}