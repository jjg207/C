#include <iostream>
using namespace std;

// Header of sub-function
const int N = 3;

void addMatrix(const double a[][N], const double b[][N], double c[][N])
{
	// Add each corresponding element of matrix paramters a[][N] and b[][N] to create new matrix c[][N]
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			c[row][col] = a[row][col] + b[row][col];
		}
	}

	// Write code to display results of a[][N] + b[][N] to form c[][N]
	cout << "The addition of the matrices is " << endl;

	// For loop prints out all elements of row 1 of matrix a[][N] with a space between each element
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << a[row][col] << " ";
		}
	}

	// Add space between row 1 elements of a[][N] and b[][N]
	cout << "    ";

	// For loop prints out all elements of row 1 of matrix b[][N] with a space between each element
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << b[row][col] << " ";
		}
	}

	// Add space between row 1 elements of b[][N] and c[][N]
	cout << "    ";

	// For loop prints out all elements of row 1 of matrix c[][N] with a space between each element
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << c[row][col] << " ";
		}
	}

	// Create new line for row 2 elements of all three matrices
	cout << "\n";

	// For loop prints out all elements of row 2 of matrix a[][N] with a space between each element
	for (int row = 1; row < 2; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << a[row][col] << " ";
		}
	}

	// Add space between row 2 elements of a[][N] and b[][N] with a + symbol to imply addition of two matrices
	cout << " +  ";

	// For loop prints out all elements of row 2 of matrix b[][N] with a space between each element
	for (int row = 1; row < 2; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << b[row][col] << " ";
		}
	}

	// Add space between row 2 elements of b[][N] and c[][N] with a = symbol to imply result of added matrices
	cout << " =  ";

	// For loop prints out all elements of row 2 of matrix c[][N] with a space between each element
	for (int row = 1; row < 2; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << c[row][col] << " ";
		}
	}

	// Create new line for row 3 elements of all three matrices
	cout << "\n";

	// For loop prints out all elements of row 3 of matrix a[][N] with a space between each element
	for (int row = 2; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << a[row][col] << " ";
		}
	}

	// Add space between row 3 elements of a[][N] and b[][N]
	cout << "    ";

	// For loop prints out all elements of row 3 of matrix b[][N] with a space between each element
	for (int row = 2; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << b[row][col] << " ";
		}
	}

	// Add space between row 3 elements of b[][N] and c[][N]
	cout << "    ";

	// For loop prints out all elements of row 3 of matrix c[][N] with a space between each element
	for (int row = 2; row < N; row++)
	{
		for (int col = 0; col < N; col++)
		{
			cout << c[row][col] << " ";
		}
	}

}


// Main function
int main()
{
	const int R = 3;

	// Declare data types of all 3 matrices
	double m1[R][N];
	double m2[R][N];
	double m3[R][N];

	// Input all elements of first matrices
	cout << "Enter matrix1: ";

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> m1[i][j];

		}
	}

	// Input all elements of second matrices
	cout << "Enter matrix2: ";

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> m2[i][j];

		}
	}

	// Call addMatrix function with m1 being first paramater containing values of first matrix, m2 being second parameter containing values of second matrix,
	// m3 being third paramter containing no values of third matrix, and R being fourth parameter containing rowSize value needed in for loops of addMatrix function
	addMatrix(m1, m2, m3);

	return 0;
}

// Author: Javier Garcia
// Date Created: September 26, 2023