#include<iostream>


// Print From Mins Tow To Number




using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}





void PrintFromMinsTowToNumber(int Number)
{
	if (Number < -3)
		return;
	
	PrintFromMinsTowToNumber(Number - 1);
	cout << Number << " ";
	
}

int main()
{
	int Number = ReadNumber();
	PrintFromMinsTowToNumber(Number);
	return 0;
}
