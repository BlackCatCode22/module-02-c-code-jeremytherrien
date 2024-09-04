// forAndWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

int sumRange(int, int); 
int main()
{
	int myLoopControlVar = 0; 

	cout << "Welcome to my for and while loop program!" << endl; 
	
	cout << "Enter a number from 0-100: ";
	cin >> myLoopControlVar; 
	
	// The while loop has a test condition inside its ()
	// This test condition is checked
	while (myLoopControlVar <= 10)
	{
		cout << "Hello " << myLoopControlVar << endl;

		// Change the loop control variable
		myLoopControlVar++; 
	}

	// Code up the sample while loop from today's video
	int counter = 100; 

	// Write out all the numbers between 100-500 that are
	// Divisible by 3 and 5
	while (counter <= 500)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			cout << counter << " is divisible by 3 and 5" << endl;
		}

		// Change our loop control variable 
		counter++; 
	}
	// create a for loop 
	// what is the loop control variable?
	// where is the loop control variable intialized, checked, and changed?

	for (int i = 1; i <= 10; i++)
	{
		cout << "i is " << i << endl; 
	}

	int startRange = 0; 
	int endRange = 0; 

	cout << "Enter the start of the range: "; 
	cin >> startRange;

	cout << "Enter the end of the range: "; 
	cin >> endRange; 

	cout << "The sum of the range is " << sumRange(startRange, endRange) << endl; 

	return 0; 
}
int sumRange(int, int)
{
	int sum = 0; 
	for (int i = 3; i <= 6; i++)
	{
		sum += i; 
	}
	return sum; 
}
