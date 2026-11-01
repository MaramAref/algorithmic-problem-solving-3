#include <iostream>
#include <string>
using namespace std; 

string ReadString(){ 
 string S1 = " "; 
 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 
 return S1; 
}

void PrintEachWordInString(string S1){
	string word;
	string delim=" ";
	short pos=0;
	cout << "\nYour string words are : \n\n";
	while((pos=S1.find(delim))!= std::string::npos){
		word=S1.substr(0,pos);
		if (word != ""){ 
           cout << word << endl; 
	     } 
	     S1.erase(0,pos+delim.length());
	}
	if (S1 != ""){ 
     cout << S1 << endl; 
     } 
}

int main(){
	PrintEachWordInString(ReadString()); 
	return 0;
}