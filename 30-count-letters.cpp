#include<iostream>
using namespace std;

string Readstring(){
	string S1=" ";
	cout<<"Pleas Enter a string : \n";
	getline(cin,S1);
	return S1;
}

char ReadCharacter(){
	char ch;
	cout << "Pleas Enter a Character:  \n";
	cin>>ch;
	return ch;
}

short CountLetter(string S1,char Letter){
	short Counter=0;
	for(short i=0;i<S1.length();i++){
		if(S1[i]==Letter)
		Counter++;
	}
	return Counter;
}

int main(){
	string S1=Readstring();
	char Letter =ReadCharacter();
	if(CountLetter(S1,Letter)==0)
	cout<<"The Character does not exist !\n";
	else
	cout << "\nLetter \'" << Letter << "\' count = " << CountLetter(S1, Letter) << endl; 
  
      return 0;
}
