#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
using namespace std;

string JoinString(string arrString[],short Length , string Delim){
	string S1=" ";
	for(int i=0;i<Length;i++){
		S1=S1+arrString[i]+Delim;
	}
	return S1.substr(0,S1.length()-Delim.length());
}
int main(){  
 string arrString[] = { "Mohammed","Faid","Ali","Maher" };
 cout << "\n\nArray after join: \n"; 
cout<< JoinString(arrString,4,"***")<<endl;

}
