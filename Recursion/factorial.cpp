/*
find the factorial 
input 4
output 24
input 5
output 120
*/
#include<iostream>
using namespace std;
int factorial(int n){
	//Base case
	if(n==0)
	return 1;
	//Recursion call
	//int smalloutput = factorial(n-1);
	//small calculation
	//return n*smalloutput;
	return n*factorial(n-1);
}
int main(){
	int n;
	cout<<"Enter number:"<<endl;
	cin>>n;
	cout<<"Factorial:"<<factorial(n);
}
