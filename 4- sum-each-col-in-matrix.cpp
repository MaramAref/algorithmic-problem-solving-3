#include<iostream>
#include <iomanip>
using namespace std;
int RandomNumber(int from,int to){
	int RandNum=rand()%(to-from+1)+ from;
	return RandNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3],short row,short col){
	for(short i=0;i<row;i++){
		for(short j=0;j<col;j++){
			arr[i][j]=RandomNumber(1,100);
		}
	}
}

void PrintMatrix(int arr[3][3],short row,short col){
	for(short i=0;i<row;i++){
		for(short j=0;j<col;j++){
			cout<<setw(3)<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}
int ColSum(int arr[3][3],short row,short col){
	int sum=0;
	for(int i=0;i<row;i++){
		sum+=arr[i][col];
	}
	return sum;
	
}

void PrintEachColSum(int arr[3][3], short Rows, short Cols) 
{ 
 
 cout << "\nThe following are the sum of each Col in the matrix : \n"; 
 
 for (short j = 0; j < Cols; j++) 
 { 
  cout << " Col " << j + 1 << " Sum = " << ColSum(arr, Rows, j) << endl; 
 } 
 
 
}
int main(){
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr,3,3);
	cout << "\n The following is a 3x3 random matrix:\n"; 
       PrintMatrix(arr, 3, 3); 
       PrintEachColSum(arr, 3, 3); 
       system("pause>0");
	
}
