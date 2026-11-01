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

short CountVowelLetters(string S1){
	short counter=0;
	
	for(short i=0;i<=S1.length();i++){
		if(IsVowel(S1[i]))
		counter++;
	}
	return counter;
}

int main(){
	string S1=Readstring();
	cout<<"The number of Vowel letter: "<<CountVowelLetters(S1)<<endl;
	return 0;
}
