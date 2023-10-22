#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Read in a file data.txt that contains unspecified number of scores
	ifstream input("data.txt");

	// Read in data types, variables, and values
	int count = 0;
	double total = 0;
	double score;
	double avg;

	// Create while loop that reads all scores until end of file
	while (!input.eof())
	{
		// Read in scores
		input >> score;
		// Prevent last number of file from being added twice
		if (input.eof()) 
			break;
		// Maintain count of number of scores
		count++;
		// Calculate total of all scores
		total += score;
	}

	// Calculate average of the scores
	avg = total / count;

	// Display total and average scores
	cout << "The total score is " << total
		<< " and the average score is " << avg;

	// Close stream 
	input.close();

	return 0;
}

// Author: Javier Garcia
// Date Created: October 8, 2023