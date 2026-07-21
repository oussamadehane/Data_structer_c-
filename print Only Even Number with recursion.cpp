#include<iostream>


// Print Only Even Number 

enum EnEvenOddNumber {
	Odd = 1, Even = 2
};


using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}


EnEvenOddNumber Check(int Number)
{
	if (Number % 2 == 0)
		return EnEvenOddNumber::Even;
	return EnEvenOddNumber::Odd;
}


void PrintOnlyEvenNumber(int Number)
{
	if (Number <= 0)
		return;
	 PrintOnlyEvenNumber(Number - 1);
	if (Check(Number) == EnEvenOddNumber::Even)
		cout << Number << " ";
}

int main()
{
	int Number = ReadNumber();
	PrintOnlyEvenNumber(Number);
	return 0;
}
