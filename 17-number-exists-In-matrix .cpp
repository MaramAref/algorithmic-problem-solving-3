#include <iostream> 
#include <iomanip> 
using namespace std; 
 
void PrintMatrix(int arr[3][3], short Rows, short Cols){ 
 for (short i = 0; i < Rows; i++){ 
   for (short j = 0; j < Cols; j++){  
   
  cout << setw(3) << arr[i][j] << "     "; 
     } 
  cout << "\n";  
  } 
} 	

short ReadNumber(string Message){
	short number=0;
	cout<<Message<<"\n";
	cin>>number;
	return number;
}

bool IsNumberInMatrix(int arr[3][3], short Number,short Rows, short Cols){
	for (short i = 0; i < Rows; i++){ 
        for (short j = 0; j < Cols; j++){  
           if(arr[i][j]==Number)
              return true;
 }  
 } 
  return false;
}

int main(){
 int Matrix[3][3] = { {77,5,12},{22,20,1}, {1,0,9} };
 
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
 
 short Number=ReadNumber("\n Enter the number to look for in matrix ?  ");
 
 if (IsNumberInMatrix(Matrix, Number, 3, 3)) 
  cout << "\n YES : it is there.\n"; 
 else 
  cout << "\n No : it's NOT there.\n"; 

 system("pause>0"); 
}
