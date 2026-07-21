#include<iostream>


// Problem Statment
//Write a program to print numbers from 1 to N using recursion.



using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}


void PrintNumberFromOneToNUsingRecursion(int Number)
{
	if (Number <= 0)
		return ;

	PrintNumberFromOneToNUsingRecursion(Number - 1);
	cout << Number <<endl;
}

int main()
{
	int Number = ReadNumber();
	PrintNumberFromOneToNUsingRecursion(Number);
	return 0;
}
