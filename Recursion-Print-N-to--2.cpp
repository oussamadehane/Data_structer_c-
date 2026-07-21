#include<iostream>


// Problem Statment
// Write a program that takes an integer input 'num' fromthe user and prints the numbers from 'num' to - 2 in decreasing order. using recursion




using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}


void PrintNumberFromNumberToMinsTwoUsingRecursion(int Number)
{
	if (Number <= -3)
		return ;
	cout << Number << " " ;
	PrintNumberFromNumberToMinsTwoUsingRecursion(Number - 1);
	
}

int main()
{
	int Number = ReadNumber();
	PrintNumberFromNumberToMinsTwoUsingRecursion(Number);
	return 0;
}
