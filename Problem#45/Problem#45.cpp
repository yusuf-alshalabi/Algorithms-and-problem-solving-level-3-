
/*

Question (45) :
Write a program to read bank client data record and convert it to one line.

Note : The client data is :
       -Account Number.
       -PinCode.
       -Name.
       -Phone.
       -Account Balance.

*/

#include <iostream>
#include <string>

using namespace std;

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
    getline(cin, clientData.AccountNumber); 
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

string convertRecordToLine(strClient clientData,string seperator="#//#") {
    string Line="";
    Line += clientData.AccountNumber+seperator;
    Line += clientData.PinCode+seperator;
    Line += clientData.Name + seperator;
    Line += clientData.Phone + seperator;
    Line += to_string(clientData.AccountBalance);

    return Line;
}
int main() {
    cout << "\nPlease Enter Client Data: \n\n";
    strClient ClientData = readClientData();

    cout << "\n\nClient Record for Saving is: \n";
    cout<<convertRecordToLine(ClientData);

    system("pause>0");
}