#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int RandomNumber(int From, int To){ 
 int randNum = rand() % (To - From + 1) + From; 
  
 return randNum; 
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols){  
 for (short i = 0; i < Rows; i++){ 
  for (short j = 0; j < Cols; j++){  
   arr[i][j] = RandomNumber(1, 10);  
   } 
   }  
}

void PrintMatrix(int arr[3][3], short Rows, short Cols){ 
 for (short i = 0; i < Rows; i++){ 
  for (short j = 0; j < Cols; j++){  
   printf(" %0*d  ", 2, arr[i][j]); 
  } 
  cout << "\n";  
  } 
}

void PrintMiddleRowOfMatrix(int arr[3][3] , short Rows , short Cols){
	short MiddleRow = Rows / 2;
	for(short i=0;i<Cols;i++){
		printf(" %0*d  ", 2, arr[MiddleRow][i]);
	}
	cout<<endl;
}

void PrintMiddleColOfMatrix(int arr[3][3] , short Rows , short Cols){
	short MiddleCols = Cols / 2;
	for(short i=0;i<Cols;i++){
		printf(" %0*d  ", 2, arr[i][MiddleCols]);
	}
	cout<<endl;
}

int main(){
	srand((unsigned)time(NULL)); 
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3); 
	
      cout << "\n Matrix 1 :\n"; 
      PrintMatrix(Matrix1, 3, 3);
      
      cout << "\n Middle Row of Matrix 1 is :\n";
      PrintMiddleRowOfMatrix(Matrix1,3,3);
      
      cout << "\n Middle Col of Matrix 1 is :\n";
      PrintMiddleColOfMatrix(Matrix1,3,3);
      
      system("pause>0"); 
      
}
 