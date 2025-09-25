

/*

Question (48) :
Write a program to read clients file and show them on the screen as follows :


                                        Client List (3) Client(s).
________________________________________________________________________________________________

|AccountNumber  |PinCode   |Name                                    |Phone       |AccountBalance
________________________________________________________________________________________________

|302312         |1234      |Yusuf                                   |0123456356  |21000
|231356         |1234      |Mohammed                                |0148930456  |23000
|346904         |1234      |Saeed                                   |0135893564  |18000

________________________________________________________________________________________________


*/


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<iomanip>

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

void printClientRecord(strClient client) {
    cout << "|" << setw(15) << left << client.AccountNumber;
    cout << "|" << setw(10) << left << client.PinCode;
    cout << "|" << setw(40) << left << client.Name;
    cout << "|" << setw(12) << left << client.Phone;
    cout << "|" << setw(12) << left << client.AccountBalance;
}

void PrintAllClientsData(vector<strClient> vClients) {
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";  
    cout << "\n_______________________________________________________"; 
    cout << "_________________________________________\n" << endl;

    cout << "|" << setw(15) <<left<<"AccountNumber" ;
    cout << "|" << setw(10) <<left<<"PinCode" ;
    cout << "|" << setw(40) <<left<<"Name" ;
    cout << "|" << setw(12) <<left<<"Phone" ;
    cout << "|" << setw(12) <<left<<"AccountBalance" ;
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    for (strClient Client : vClients) {
         printClientRecord(Client);   
         cout << endl;
    }
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

int main() { 
    vector <strClient> vClients = LoadCleintsDataFromFile(ClientsFileName);  
    PrintAllClientsData(vClients);    
    system("pause>0"); 
    return 0;
}