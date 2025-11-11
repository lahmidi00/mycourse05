#include<iostream>
#include<cmath>
#include<string> 

using namespace std;

int readnumbers(string Message)
{
	int number = 0;

	do
	{
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
	
}
int normalToRevers( int number)
{
	int remainder = 0, revers = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;

		revers = revers * 10 + remainder;
		
	}
	return revers;

}
void printreverseToNormal(int number)
{
	
	int remainder = 0;
	
	while (number > 0)
	{
		remainder = number  % 10;
		number = number / 10;

		cout << remainder << endl;
		
	}

}

int main()
{
	
	int number = readnumbers("please enter a positive number");
	
	printreverseToNormal(normalToRevers(number));
	
		
	return 0;
}

