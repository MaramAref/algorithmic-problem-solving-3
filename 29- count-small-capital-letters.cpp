#include<iostream>
using namespace std;

string Readstring(){
	string S1=" ";
	cout<<"Pleas Enter a Character: \n";
	getline(cin,S1);
	return S1;
}


short CountCapitalLetters(string S1){
	short CounterOfUpper=0;
	for(int i=0;i<S1.length();i++){
	if(isupper(S1[i]))
	CounterOfUpper++;
	}
	return CounterOfUpper;
}
	
short CountSmallLetters(string S1){
      short CounterOfLower=0;
      for(int i=0;i<S1.length();i++){
	if(islower(S1[i]))
	CounterOfLower++;
      }
	return CounterOfLower;	
}

int main(){
	string S1=Readstring();
	cout<<"String Length: "<<S1.length()<<"\n";
	cout<<"Capital Letters Count: "<<CountCapitalLetters(S1)<<"\n";
	cout<<"Small Letters Count: "<<CountSmallLetters(S1)<<endl;
}
