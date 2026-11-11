#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
#include <fstream> 
 
using namespace std; 
const string ClientsFileName = "Clients.txt"; 

struct stClient{ 
string AccountNumber="";
string PinCode="";
string Name="";
string Phone="";
int AccountBalance=0;

};

vector<string>SplitString(string S1,string Delim){
	
	 string::size_type pos=0;
	string sWord="";
	vector <string> vString; 
	
	while((pos=S1.find(Delim))!= std::string::npos){
		sWord=S1.substr(0,pos);
		
		if(sWord!=""){
			vString.push_back(sWord);
		}
		
		S1.erase(0, pos + Delim.length());
		
		
	}
                if(S1!=""){
				vString.push_back(S1);
			}
			
	return vString;
	
}

stClient CounvertLineToRecord(string Line,string Delim="#//#"){
	
	     stClient Client;
		vector <string> vClientData; 
		
		vClientData=SplitString(Line,Delim);
		
		Client.AccountNumber=vClientData[0];
		Client.PinCode=vClientData[1];
		Client.Name=vClientData[2];
		Client.Phone=vClientData[3];
		Client.AccountBalance=stod(vClientData[4]);
		
		return Client;
		
}

vector <stClient> LoadClientsDataFromFile(string FileName){ 
 vector <stClient> vClient; 
 
 fstream MyFile; 
 
 MyFile.open(FileName, ios::in); 
 
 if (MyFile.is_open()){ 
  string Line; 
  stClient Clinet; 
 
  while (getline(MyFile, Line)){ 
   Clinet = CounvertLineToRecord(Line); 
   vClient.push_back(Clinet); 
  } 
 
  MyFile.close(); 
 } 
 
 return vClient; 
} 


void PrintClinetRecord(stClient Clinet) 
{ 
 cout << "\n\nThe following is the extracted client record : \n\n"; 
 
 cout << "Account Number  : " << Clinet.AccountNumber << endl; 
 cout << "PinCode         : " << Clinet.PinCode << endl; 
 cout << "Name            : " << Clinet.Name << endl; 
 cout << "Phone           : " << Clinet.Phone << endl; 
 cout << "Account Balance : " << Clinet.AccountBalance << endl; 
} 

string ReadClientAccountNumber(){
	string AccountNumber;
	cout<<"Please enter AccountNumber : \n";
	cin>>AccountNumber;
	return AccountNumber;
}

bool FindClientByAccountNumber(string AccountNumber, stClient& Client){ 

 vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName); 
 
 for (stClient C : vClients){ 
 
  if (C.AccountNumber == AccountNumber){
   
   Client = C; 
   return true; 
   
  } 
  } 
  
 return false; 
} 

int main(){
	
 stClient Client; 
 
 string AccountNumber = ReadClientAccountNumber(); 
 
 if (FindClientByAccountNumber(AccountNumber, Client)) 
   { 
  PrintClinetRecord(Client); 
    } 
 else 
 { 
  cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found! \n"; 
 } 
 
 system("pause>0"); 
 
 

}
