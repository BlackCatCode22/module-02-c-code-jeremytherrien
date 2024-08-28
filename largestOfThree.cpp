// largestOfThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 08/28/24
#include <iostream>

using namespace std; 

int getAnIntFromTheUser(int num); 

int main()
{
	int num = 0; 
	int num1 = 0; 
	int num2 = 0; 
	int num3 = 0; 

	num1 = getAnIntFromTheUser(num); 
	num2 = getAnIntFromTheUser(num); 
	num3 = getAnIntFromTheUser(num); 

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << num1 << " is the largest of three " << endl; 
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			cout << num2 << " is the largest of three " << endl; 
		}
		else
		{
			cout << num3 << " is the largest of three " << endl; 
		}
	}

	return 0; 
}

int getAnIntFromTheUser(int num)
{
	cout << "Enter a number (whole number): ";
	cin >> num;

	return num;
}
