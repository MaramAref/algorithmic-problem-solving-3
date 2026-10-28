#include <iostream> 
#include <string> 
#include <iomanip> 
 
using namespace std;

string ReadString(){
	string string1=" ";
	cout<<"Enter your string: \n";
	getline(cin,string1);
	return string1;
}

string PrintFirstLetterOfEachWord(string &string1){
	bool IsFirstLetter=true;
	for(short i=0;i<string1.length();i++){
		if(string1[i]!=' ' && IsFirstLetter){
		string1[i]=tolower(string1[i]);
		}
		
		if(string1[i]==' ')
		IsFirstLetter=true;
		else 
		IsFirstLetter=false;
		
	}
	return string1;
}
int main(){
	string S1=ReadString();
	PrintFirstLetterOfEachWord(S1);
	cout<<S1<<endl;
	system("pause>0");
}
