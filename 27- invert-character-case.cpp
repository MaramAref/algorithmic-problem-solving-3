#include<iostream>
using namespace std;

char ReadCharacter(){
	char ch;
	cout<<"Pleas Enter a Character: \n";
	cin>>ch;
	return ch;
}

char InvertLetterCase(char ch){
return isupper(ch) ? tolower(ch) : toupper(ch);
}

int main(){
	char ch=ReadCharacter();
	cout << "\n Char after inverting case : \n"; 
	ch=InvertLetterCase(ch);
	cout<<ch<<endl;
}
