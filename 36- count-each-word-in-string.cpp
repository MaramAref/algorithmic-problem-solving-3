#include <iostream>
#include <string>
using namespace std; 

string ReadString() 
{ 
 string S1 = " "; 
 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 
 return S1; 
}

short CountWords( string S1){
	short wherethespce=0;
	short counter=0;
	string word;
	string thespace="";
	while((wherethespce=S1.find(thespace))!=std::string::npos){
		word=S1.substr(0,wherethespce);
		if(word!=""){
		counter++;
		}
		S1.erase(0,wherethespce+thespace.length());
	}
	return counter++;
}

int main(){
string S1=ReadString();	
cout<<"number of words: "<<CountWords(S1)<<endl;
return 0;
}