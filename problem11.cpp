#include<iostream>
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
bool IsPalindromrNumber(int number)
{
	 return (normalToRevers(number) == number);
}


int main()
{
	
	if (IsPalindromrNumber(readnumbers("enter a positive number")))
	
		cout << "is palindrom number";
	
	else
	
		cout << "it is not a palindrom number";
	
		
	return 0;
}

