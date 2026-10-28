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

void PrintFirstLetterOfEachWord(string string1){
	bool IsFirstLetter=true;
	cout << "\n First letters of this string : \n";
	
	for(short i=0;i<string1.length();i++){
		if(string1[i]!=' ' && IsFirstLetter){
		cout<<string1[i]<<endl;
		}
		
		if(string1[i]==' ')
		IsFirstLetter=true;
		else 
		IsFirstLetter=false;
	}
}

int main(){
	string S1=ReadString();
	PrintFirstLetterOfEachWord(S1);
	system("pause>0");
}
