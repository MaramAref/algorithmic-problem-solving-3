#include<iostream>
using namespace std;

void PrintFibonacciUsingLoop(short Number,int Prev1 ,int Prev2){
	int  FebNumber = 0; 
	if(Number>0){
		FebNumber=Prev1+Prev2;
		Prev2=Prev1;
		Prev1=FebNumber;
		cout << FebNumber << "   "; 
		PrintFibonacciUsingLoop(Number-1,Prev1,Prev2);
	}
}

int main(){
	PrintFibonacciUsingLoop(10,0,1);
}
