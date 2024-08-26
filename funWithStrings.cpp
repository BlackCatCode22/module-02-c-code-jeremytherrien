// funWithStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 08/26/24

#include <iostream>
#include <string>

using namespace std; 

int main()
{ 
    char myChar01; 
    char myChar02; 

    cout << "Welcome to my String Program! " << endl;

    // Create a string object
    string myString;

    // assign a value to the string 
    myString = "This is an abcdefg string";

    cout << myString << endl;

    cout << "The size of '" << myString << "' is: " << myString.size() << endl;

    // OUtput the chars at subscripts (or position numbers) 2 and 14. 
    myChar01 = myString[2]; 
    myChar02 = myString[14]; 

    // Output the chars we extracted from our string object
    cout << "At position 2 is " << myChar01 << endl; 
    cout << "At position 14 is " << myChar02 << endl; 

    // Use the at() function to get the char at subscript 16

    cout << "Position 16 is " << myString.at(16) << endl; 

    char anotherChar; 
    anotherChar = myString.at(16); 
    cout << "another char is: " << anotherChar << endl; 
     
    // join (concatenate) two strings and output the result
    string anotherString = "xyz"; 
    string twoStrings = ""; 

    twoStrings = myString + anotherString; 

    cout << "twoStrings is " << twoStrings << endl; 

    // substr() is very important and useful
    string mySubString = ""; 
    mySubString = myString.substr(5, 2); 
    cout << "mySubString is: " << mySubString << endl; 





    return 0; 
}

