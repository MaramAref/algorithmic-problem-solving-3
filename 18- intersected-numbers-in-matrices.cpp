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

bool IsNumberInMatrix(int arr[3][3], short Number,short Rows, short Cols){
	for (short i = 0; i < Rows; i++){ 
         for (short j = 0; j < Cols; j++){  
            if(arr[i][j]==Number)
               return true;
 }  
 } 
  return false;
}

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3],short Rows, short Cols){
   short Number=0;
  for (short i = 0; i < Rows; i++){ 
    for (short j = 0; j < Cols; j++){  
     Number = Matrix1[i][j]; 
  if (IsNumberInMatrix( Matrix2 , Number , Rows , Cols)) 
   { 
    cout << setw(3) << Number << "   "; 
   } 
     } 
  }
}

int main(){
	short Number=0;
	int Matrix1[3][3]={{12,5,77},{1,20,22},{9,0,1}};
	 int Matrix2[3][3]={{90,80,5},{1,77,22},{3,8,10}};
	 
	cout << "\n Matrix1  :\n"; 
      PrintMatrix(Matrix1, 3, 3); 
      
       cout << "\n Matrix 2 :\n"; 
       PrintMatrix(Matrix2, 3, 3); 
       
	 cout << "\n Intersected Numbers are : \n\n"; 
       PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);
	return 0;
}
