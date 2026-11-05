#include <iostream> 
#include <string> 
#include <iomanip>
#include <vector> 
#include <fstream>
 
using namespace std; 

const string ClientsFileName = "Clients.txt";

struct stClinet{ 
string AccountNumber="";
string PinCode="";
string Name="";
string Phone="";
double AccountBalance=0;

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

stClinet ConvertLineToRecord(string Line,string Delim="#//#"){
	
	     stClinet Client;
		vector <string> vClientData; 
		
		vClientData=SplitString(Line,Delim);
		
		Client.AccountNumber=vClientData[0];
		Client.PinCode=vClientData[1];
		Client.Name=vClientData[2];
		Client.Phone=vClientData[3];
		Client.AccountBalance=stod(vClientData[4]);
		
		return Client;
		
}




vector<stClinet> LoadClientsDataFromFile(string filename){
	
	vector<stClinet>vCilent;
	fstream MyFile;
	
	MyFile.open(filename,ios::in);
	
	if(MyFile.is_open()){
		string Line;
		stClinet Clinet;
		
		while(getline(MyFile,Line)){
			Clinet=ConvertLineToRecord(Line);
			vCilent.push_back(Clinet);
		}
	}
	
	MyFile.close(); 
     
     return vCilent;
}


void PrintClientRecord(stClinet Clinet){
	
	cout<<"| "<<left<< setw(15)<<Clinet.AccountNumber;
	cout<<"| "<<left<< setw(15)<<Clinet.PinCode;
	cout<<"| "<<left<< setw(15)<<Clinet.Name;
	cout<<"| "<<left<< setw(15)<<Clinet.Phone;
	cout<<"| "<<left<< setw(15)<<Clinet.AccountBalance;
	
}

void print_div(){
	
	cout << "\n---------------------------------------------------------"; 
       cout << "-------------------------------------------\n" << endl;
       
}

void  PrintAllClientsData(vector <stClinet> vClients){
	
	cout<<"\n\t\t\t\t\t Client List ("<<vClients.size()<<" )  Client(s).";
	
	print_div();
	
	cout << "| " << left << setw(15) << "Account Number"; 
      cout << "| " << left << setw(10) << "Pin Code "; 
      cout << "| " << left << setw(30) << "Client Name"; 
      cout << "| " << left << setw(12) << "Phone "; 
      cout << "| " << left << setw(12) << "Balance ";
      
      print_div();
      
      for(stClinet Client : vClients){
      	
      	PrintClientRecord(Client);
      	cout<<endl;
      	
      }
      
      print_div();
      
}

int main(){
	vector <stClinet> vClient =LoadClientsDataFromFile(ClientsFileName);
	
	PrintAllClientsData(vClient);
	
	system("pause>0"); 
	
}
