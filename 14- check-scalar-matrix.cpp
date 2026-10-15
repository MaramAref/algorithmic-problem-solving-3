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

bool IsScalarMatrix(int arr[3][3], short Rows, short Cols){
	int FirstDiagElement=arr[0][0];
	for (short i = 0; i < Rows; i++){ 
        for (short j = 0; j < Cols; j++){ 
   if (i == j && arr[i][j] != FirstDiagElement){ 
     return false; 
   } 
  
   else if (i != j && arr[i][j] != 0){ 
     return false; 
      } 
    } 
  } 
 return true; 
}

int main(){
  
 int Matrix[3][3] = { {9,0,0},{0,9,0}, {0,0,9} }; 
  
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
 
 if (IsScalarMatrix(Matrix, 3, 3)) 
  cout << "\n YES : Matrix is Scalar."; 
 else 
  cout << "\n No : Matrix is NOT Scalar."; 
 
 system("pause>0");
}
