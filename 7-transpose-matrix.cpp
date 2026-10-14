#include <iostream> 
#include <iomanip> 
 
using namespace std; 

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols ) 
{
	int counter=0;
	for(short i=0;i<Rows;i++)
		{
		for(short j=0;j<Cols;j++)
			{
			counter++;
			arr[i][j]=counter;
			
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) 
{ 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  {  
   cout << setw(3) << arr[i][j] << "     "; 
  } 
   
  cout << "\n";  
 } 
} 

void TransposeMatrix(int arr[3][3], int arrTransposed [3][3],short Rows, short Cols){
	for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  { 
   arrTransposed [i][j] = arr[j][i]; 
  } 
 } 
}

int main(){
	int arr[3][3];
	int arrTransposed[3][3];
      short Rows=3;
      short Cols=3 ;
      
      FillMatrixWithOrderedNumbers(arr,Rows,Cols);
      PrintMatrix(arr,Rows,Cols);
      
      TransposeMatrix(arr,arrTransposed,Rows,Cols);
      cout << "\n The following is the Transposed matrix:\n";
      PrintMatrix(arrTransposed,Rows,Cols);
      system("pause>0");
}
