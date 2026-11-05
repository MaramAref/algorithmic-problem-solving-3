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

vector<string>SplitString(string S1,string Delim){
	short pos=0;
	string sWord="";
	vector <string> vString; 
	
	while(pos=S1.find(Delim)!=std::string::npos){
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

stClient ConvertLineToRecord(string Line,string Delim="#//#"){
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

void PrinttClientRecord(stClient Client){
	cout<<"Account Number  : "<<Client.AccountNumber<<endl;
	cout<<"PinCode         : "<<Client.PinCode<<endl;
	cout<<"Name            : "<<Client.Name<<endl;
	cout<<"Phone           : "<<Client.Phone<<endl;
	cout<<"Account Balance : "<<Client.AccountBalance<<endl;
}

int main(){
	string Line="A150#//#1234#//#Mohammed AbuHadhoud#//#079999#//#5270.00000";
	
	cout<<"\n Line Record is : \n"<<Line<<endl;
	
	stClient Client;
	Client=ConvertLineToRecord(Line);
	
	cout<<"The following is the extracted client record : \n";
	
	PrinttClientRecord(Client);
	
	return 0;
}
