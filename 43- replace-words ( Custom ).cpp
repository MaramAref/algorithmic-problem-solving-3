#include<iostream>
#include<string>
using namespace std;

string Returnlowercase(string S1){
	for(int i=0;i<S1.length();i++){
	S1[i]= tolower(S1[i]);
	}
	return S1;
}


string ReplaceWord(string S1,string StringToReplace,string sRepalceTo){
	int pos=S1.find(StringToReplace);
	while(pos!=std::string::npos){
		
	S1=S1.replace(pos,StringToReplace.length(),sRepalceTo);
	pos=S1.find(StringToReplace);
	}
	return S1;
} 
int main(){
	string S1="Welcome to Yemen , yemen is a nice country ";
	string StringToReplace="Yemen";
	string sRepalceTo ="USA";
	
	cout << "\nOrigial String\n" << S1; 
      
      cout << "\n\nReplace with Match Case :\n";
	cout<<ReplaceWord(S1,StringToReplace,sRepalceTo)<<"\n";
	
	
	cout << "\n\nReplace with don't Match Case :\n";
	cout<<ReplaceWord(Returnlowercase(S1),Returnlowercase(StringToReplace),sRepalceTo)<<"\n";
	
	cout<<endl;
	
	return 0;
}
