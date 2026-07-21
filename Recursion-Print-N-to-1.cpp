#include<iostream>


// Problem Statment
//Write a program to print numbers from N to 1 using recursion.



using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}


void PrintNumberFromNumberToOneUsingRecursion(int Number)
{
	if (Number <= 0)
		return ;
	cout << Number << endl;
	PrintNumberFromNumberToOneUsingRecursion(Number - 1);
	
}

int main()
{
	int Number = ReadNumber();
	PrintNumberFromNumberToOneUsingRecursion(Number);
	return 0;
}
