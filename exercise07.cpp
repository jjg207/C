#include <iostream>
using namespace std;


int main()
{
	// Write in data types, varbiales, and values
	const int size = 101;
	int array[size] = { 0 };
	int entry;

	// Initialize entry to begin while loop
	cout << "Enter the numbers between 1 and 100 ending with 0: ";
	cin >> entry;

	// Write while loop to input 100 possible entries between 1 and 100 while 0 ends loop
	while (entry != 0)
	{
		if (entry >= 1 && entry <= 100)
		{
			array[entry]++;
		}
		cin >> entry;
	}

	// Write a for loop to determine the occurrence of entries in array
	for (int i = 0; i <= 100; i++)
	{
		if (array[i] > 0 && array[i] == 1)
		{
			cout << i << " occurs " << array[i] << " time" << endl;
		}
		else if (array[i] > 0)
		{
			cout << i << " occurs " << array[i] << " times" << endl;
		}
	}

	return 0;
}
// Author: Javier Garcia
// Date Created: September 26, 2023