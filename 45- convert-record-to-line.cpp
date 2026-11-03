#include <iostream> 
#include <string> 
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

int main(){
	
       	cout << "\nPlease Enter Client Data : \n\n";
		stClient Client=ReadClientData();
		
		cout << "\n\nClient Record for Saving is: \n"; 
		cout<<CounvertRecordToLine(Client);
		
		
		return 0;
		
}
