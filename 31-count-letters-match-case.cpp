#include<iostream>
using namespace std;

string Readstring(){
	string S1=" ";
	cout<<"Pleas Enter a string : \n";
	getline(cin,S1);
	return S1;
}

char ReadCharacter(){
	char Letter;
	cout<<"Pleas Enter a Character to search: \n";
	cin>>Letter;
	return Letter;
}

char InvertLetterCase(char Letter) 
{ 
 return isupper(Letter) ? tolower(Letter) : toupper(Letter); 
} 

short CountLetter(string S1 , char Letter , bool MatchCase = true){
	short Counter = 0;
	for (short i = 0; i <= S1.length(); i++){
		if(MatchCase){
			if(S1[i]==Letter)
			 Counter++;
		}
		else{
			if (tolower( S1[i]) == tolower(Letter))
			 Counter++;
		}
	} 
	return Counter;
}
int main(){
	string S1=Readstring();
	char Letter =ReadCharacter();
	cout << "\nLetter \'" << Letter << "\' count = " << CountLetter(S1 , Letter) ; 
      cout << "\nLetter \'" << Letter << "\'"; 
      cout << "or \'" << InvertLetterCase(Letter) << "\' "; 
      cout << " Count = " << CountLetter(S1, Letter, false);
}