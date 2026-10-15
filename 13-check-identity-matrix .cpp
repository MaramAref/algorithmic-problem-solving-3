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

bool IsIdentityMatrix(int arr[3][3], short Rows, short Cols){
   for (short i = 0; i < Rows; i++){ 
    for (short j = 0; j < Cols; j++){ 
    
   if (i == j && arr[i][j] != 1){ 
   
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
  
 int Matrix[3][3] = { {1,0,0},{0,1,0}, {0,0,1} }; 
  
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
 
 if (IsIdentityMatrix(Matrix, 3, 3)) 
  cout << "\n YES : Matrix is Identity."; 
 else 
  cout << "\n No : Matrix is NOT Identity."; 
 
 system("pause>0");
}
