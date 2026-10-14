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
	for(short i=0;i<row;i++){
		sum+=arr[i][col];
	
	}
     return sum;
}
void fillsumarray(int arr[3][3],int arrsum[3],short Rows, short Cols){
	for(int i=0;i<Rows;i++){
      arrsum[i]=ColSum(arr,Rows,i);
	}
}

void PrintColsSumArray(int arr[3],short Cols){
     cout << "\nThe following are the sum of each Col in the matrix : \n";
     for(int i=0;i<Cols;i++){
     	cout << " Col " << i + 1 << " Sum = " <<arr[i]<<endl;
     }
}
int main(){
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrsum[3];
	FillMatrixWithRandomNumbers(arr,3,3);
	
	cout << "\n The following is a 3x3 random matrix:\n";
	
	 PrintMatrix(arr,3,3);
	 fillsumarray(arr,arrsum,3,3);
	 PrintColsSumArray(arrsum,3);
       system("pause>0"); 

}
