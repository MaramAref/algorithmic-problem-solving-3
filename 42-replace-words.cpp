#include<iostream>
#include<string>
using namespace std;

string ReplaceWord(string S1,string StringToReplace,string sRepalceTo){
	int pos=S1.find(StringToReplace);
	while(pos!=std::string::npos){
		
	S1=S1.replace(pos,StringToReplace.length(),sRepalceTo);
	pos=S1.find(StringToReplace);
	}
	return S1;
} 
int main(){
	string S1="Welcome to Yemen , Yemen is a nice country";
	string StringToReplace="Yemen";
	string sRepalceTo ="USA";
	
	cout << "\nOrigial String\n" << S1; 
      cout << "\n\nString After Replace:\n";
	cout<<ReplaceWord(S1,StringToReplace,sRepalceTo)<<endl;
	
	return 0;
}
