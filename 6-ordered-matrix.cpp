#include<iostream>
#include <iomanip> 
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3],short row,short col){
	int counter=0;
	for(short i=0;i<row;i++){
		for(short j=0;j<col;j++){
		counter++;
		arr[i][j]=counter;
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
int main(){
	int arr[3][3];
	FillMatrixWithOrderedNumbers(arr,3,3);
	
	cout << "\n The following is a 3x3 Ordered matrix:\n";
	PrintMatrix(arr,3,3);
	system("pause>0"); 
}
