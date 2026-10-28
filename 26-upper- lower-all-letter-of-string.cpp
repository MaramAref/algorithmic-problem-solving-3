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

string UpperAllString(string string1){
	
	for(short i=0;i<string1.length();i++){
		string1[i]=toupper(string1[i]);
	}
	return string1;
}
string LowerAllString(string string1){
	for(short i=0;i<string1.length();i++){
	string1[i]=tolower(string1[i]);
	}
	return string1;
}

int main(){
	string S1 = ReadString(); 
	cout << "\n String after Upper : \n"; 
      S1 = UpperAllString(S1); 
      cout << S1 << endl; 
  
      cout << "\n String after Lower : \n"; 
       S1 = LowerAllString(S1); 
      cout << S1 << endl; 
  
       system("pause>0"); 
	
}
