#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 

string TrimLeft(string S1) {
	for(int i=0;i<S1.length();i++){
		if(S1[i] !=' '){
		return S1.erase(0,i);
	  }
	}
	return S1;
}

string TrimRight(string S1){
	for(int i=S1.length()-1;i>=0;i--){
		if(S1[i] !=' '){
		return S1.erase(i+1);
	  }
	}
	return S1;
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
