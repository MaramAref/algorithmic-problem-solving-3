#include <iostream> 
#include <string> 
#include <fstream> 
#include <iomanip>
#include <vector> 
 
using namespace std; 

struct stClient{ 
string AccountNumber="";
string PinCode="";
string Name="";
string Phone="";
int AccountBalance=0;

};

stClient ReadClientData(){
	stClient Client;
	
	cout<<"Enter Account Number : ";
	getline(cin >> ws,Client.AccountNumber);
	
	cout<<"Enter PinCode : ";
	getline(cin,Client.PinCode);
	
	cout<<"Enter Name : ";
	getline(cin,Client.Name);
	
	cout<<"Enter Phone: ";
	getline(cin,Client.Phone);
	
	cout<<"Enter Account Balance : ";
	cin>>Client.AccountBalance;
       return Client;
}

string CounvertRecordToLine(stClient Client, string Delim="#//#"){
	string stClientRecord="";
	
	stClientRecord+=Client.AccountNumber+Delim;
	stClientRecord+=Client.PinCode+Delim;
	stClientRecord+=Client.Name+Delim;
	stClientRecord+=Client.Phone+Delim;
	stClientRecord+=to_string(Client.AccountBalance);
	
	return stClientRecord;
}

const string ClientsFileName = "Clients.txt"; 

void AddDataLineToFile(string  FileName, string strDataLine){
	fstream  MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	
	if(MyFile.is_open()){
		MyFile<<strDataLine<<endl;
		MyFile.close();
	}
}

void AddNewClient(){
	stClient Client;
	Client=ReadClientData();
	AddDataLineToFile(ClientsFileName,CounvertRecordToLine(Client));
	
}

void AddClients(){
	char Answer='y';
	
	do{
	   system("cls");
	   cout<<"Adding new Client : \n\n";
	   AddNewClient();	
	   cout<<"Client Added Successfully , do you want to add more clients (y,n)";
	  cin>>Answer;
	}while(tolower(Answer)=='y');
}

int main(){
	AddClients(); 
	
	system("pause>0");
}
