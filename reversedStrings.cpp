// reversedStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

int main()
{
	string word; 
	int x = 0; 

	cout << "Enter any word to be reversed: "; 
	cin >> word; 

	x = word.length(); 

	for (int i = 0; i < 1; ++i)
	{
		reverse(word.begin(), word.end()); 

		cout << word << endl;
	}
	return 0; 
}

