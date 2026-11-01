#include <iostream> 
#include <string> 
#include <iomanip> 
 
using namespace std;

char ReadChar() 
{ 
char letter;
cout<<"Enter letter to check \n";
cin>>letter;
return letter;
}

bool IsVowel(char letter) {
	letter=tolower(letter);
	return((letter =='a') ||( letter=='e') || (letter=='i')|| (letter=='o')||(letter=='u') );
	
}

int main(){
	char letter=ReadChar();
	
	if(IsVowel(letter))
      cout << "\nYes Letter \'" <<letter  << "\' is Vowel\n";
	else 
	cout << "\nNo Letter \'" << letter << "\' is NOT Vowel\n";

}
