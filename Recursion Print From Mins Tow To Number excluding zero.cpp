#include<iostream>


// Print From Mins Tow To Number excluding zero



using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Enter Number : ";
	cin >> Number;
	return Number;
}





void PrintFromMinsTowToNumberexcludingzero(int Number)
{
	if (Number <= -3)
		return;
	PrintFromMinsTowToNumberexcludingzero(Number - 1);
	if(Number!=0)
		cout << Number << " ";
}

int main()
{
	int Number = ReadNumber();
	PrintFromMinsTowToNumberexcludingzero(Number);
	return 0;
}
