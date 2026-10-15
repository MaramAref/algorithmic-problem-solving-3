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
 
 short ReadNumber(){
 	short number;
 	cout<<"Enter the number to count in matrix: ";
 	cin>>number;
 	return number;
 }
 
short CountNumberInMatrix( int Matrix[3][3], int Number ,short Rows, short Cols){
	short counter=0;
	for (short i = 0; i < Rows; i++) { 
       for (short j = 0; j < Cols; j++) {  
    if(Matrix[i][j]==Number)
    counter++;
    } 
  }
return counter;
}
int main(){
	int Matrix[3][3] = { {9,1,12},{0,9,1}, {0,9,9} }; 
	short Number=ReadNumber();
 
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3);  
  
 cout <<"\n Number " << Number << " Count in matrix is "  
  << CountNumberInMatrix(Matrix,Number, 3, 3) << endl; 
   
 system("pause>0"); 
}
