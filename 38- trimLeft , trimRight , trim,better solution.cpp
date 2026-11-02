#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 

string TrimLeft(string S1) {
	for(int i=0;i<S1.length();i++){
		if(S1[i] !=' '){
		return S1.substr(i,S1.length()-i);
	  }
	}
	return "";
}

string TrimRight(string S1){
	for(int i=S1.length()-1;i>=0;i--){
		if(S1[i] !=' '){
		return S1.substr(0,i+1);
	  }
	}
	return "";
}

string Trim(string S1){
	return TrimLeft(TrimRight(S1));
}

int main(){
	string S1 ="    Maram Aref     ";
	cout<<"String  ="<<S1<<"\n";
	cout<<"Trim Left  ="<<TrimLeft(S1)<<endl;
	cout<<"Trim Right  ="<<TrimRight(S1)<<endl;
	cout<<"Trim  ="<<Trim(S1)<<endl;
}

