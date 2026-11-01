#include<iostream>
using namespace std;

string Readstring(){
	string S1=" ";
	cout<<"Pleas Enter a string : \n";
	getline(cin,S1);
	return S1;
}

bool IsVowel(char letter) {
	letter=tolower(letter);
	return((letter =='a') ||( letter=='e') || (letter=='i')|| (letter=='o')||(letter=='u') );
	
}

void PrintVowelLetters(string S1){
	
	for(short i=0;i<=S1.length();i++){
		
		if(IsVowel(S1[i]))
		cout<<S1[i]<<"  ";
	}
	
}

int main(){
	string S1=Readstring();
	
	cout<<"\nVowel Letters are: ";
	PrintVowelLetters(S1);
	
	cout<<endl;

}
