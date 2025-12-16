/*

	- Al-Azhar University.
	- Faculty of computers & AI.
	- Department of computer science.
	- Group A, Section 2.
	- Serial Number: 79.
	- Made by: حمزة وليد محمود نصر.

*/
#include <iostream>
using namespace std;
int main()
{
	// Declare variables that store arrays and its lengths.
	int firstArray[100], secondArray[100];
	int array1Len, array2Len;

	// Take the length of these arrays from user.
	cout << "\nEnter the length of the first array: ";
	cin >> array1Len;

	cout << "\nEnter the length of the second array: ";
	cin >> array2Len;

	// First, Check from the lengths match.
	if (array1Len != array2Len)
	{
		cout << "\n\nThe two arrays are not identical.";
		return 0;
	}

	// Fill the first array from user.
	cout << "\nFill the first array: \n";
	for (int i = 0; i < array1Len; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> firstArray[i];
	}

	// Fill the second array from user.
	cout << "\nFill the second array: \n";
	for (int i = 0; i < array2Len; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> secondArray[i];
	}

	// Then, check from the match of elements.
	for (int i = 0; i < array1Len; i++)
		if (firstArray[i] != secondArray[i])
		{
			cout << "\nThe two arrays are not identical." << endl;
			return 0;
		}

	cout << "\nThe two arrays are identical." << endl;	
	return 0;
}