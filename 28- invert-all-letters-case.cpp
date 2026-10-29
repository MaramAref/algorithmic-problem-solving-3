#include<iostream>
using namespace std;

string Readstring(){
	string S1=" ";
	cout<<"Pleas Enter a Character: \n";
	getline(cin,S1);
	return S1;
}

char InvertLetterCase(char ch){
return isupper(ch) ? tolower(ch) : toupper(ch);
}

string InvertAllStringLetterCase(string S1){
	for(int i=0;i<S1.length();i++){
		S1[i]=InvertLetterCase(S1[i]);
	}
	return S1;
}

int main(){
	string S1=Readstring();
	cout << "\n String after Invert All String Letter Case : \n"; 
	S1=InvertAllStringLetterCase(S1);
	cout<<S1<<endl;
}
