// funWithFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

int getAnIntFromTheUser(int num); 
void compareTwoInts(int num1, int num2);
int sumTwoInts(int num1, int num2, int sum); 

int main()
{
	int num = 0; 
	int num1 = 0;
	int num2 = 0; 
	int sum = 0; 

	num1 = getAnIntFromTheUser(num); 
	num2 = getAnIntFromTheUser(num);

	compareTwoInts(num1, num2); 

	sum = sumTwoInts(num1, num2, sum); 
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

	return 0; 
}

int getAnIntFromTheUser(int num)
{
	cout << "Enter a number (whole number): "; 
	cin >> num; 

	return num; 
}

void compareTwoInts(int num1, int num2)
{
	if (num1 > num2)
	{
		cout << num1 << " is greater than " << num2 << endl; 
	}
	else if (num2 > num1)
	{
		cout << num2 << " is greater than " << num1 << endl; 
	}
	else
	{
		cout << num1 << " and " << num2 << " are the same" << endl; 
	}
}

int sumTwoInts(int num1, int num2, int sum)
{
	sum = num1 + num2; 

	return sum; 
}