#include<iostream>
#include <iomanip> 
using namespace std;
int RandomNumber(int from,int to){
	int RandNum=rand()%(to-from+1)+ from;
	return RandNum;
}

void FillMatrix(int arr[3][3],short row,short col){
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

int RowSum(int arr[3][3],short row,short col){
	int sum=0;
	for(short i=0;i<col;i++){
		sum+=arr[row][i];
	}
	return sum;
}

void PrintEachRowSum(int arr[3][3],short row,short col){
     cout << "\nThe following are the sum of each row in the matrix : \n";
     for(int i=0;i<row;i++){
     	cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, col) <<endl;
     }
}
int main(){
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrix(arr,3,3);
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr,3,3);
	PrintEachRowSum(arr, 3, 3);
	system("pause>0"); 
	
}
