#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Create a class named Rectangle to represent a rectangle
class Rectangle
{
public:
	
	// Read in width and height of rectangle
	double width, height;

	// Create a no-arg constructor that creates a rectangle with width = 1 and height = 1
	Rectangle()
	{
		width = 1; 
		height = 1;
	}

	// Create constructor that creates a rectangle with specified width and height
	Rectangle(double newWidth, double newHeight)
	{
		width = newWidth;
		height = newHeight;
	}

	// Calculate area of rectangle
	double getArea()
	{
		return width * height;
	}

	// Calculate perimeter of rectangle
	double getPerimeter()
	{
		return 2 * (width + height);
	}

	// Return a string containing width, height, area, and perimeter of rectangle
	string printRectangle()
	{
		ostringstream b;
		ostringstream c;
		ostringstream d;
		ostringstream e;

		b << width;
		c << height;
		d << getArea();
		e << getPerimeter();

		string f = b.str();
		string g = c.str();
		string h = d.str();
		string i = e.str();


		string a = "The area of a rectangle with width " + f
			+ " and height " + g + " is " + h
			+ " and perimeter is " + i;

		return a;
	}
	
};

int main()
{
	// Create rectangle object with width 4 and height 40
	Rectangle Rectangle1(4, 40);
	cout << Rectangle1.printRectangle() << endl;

	// Create rectangle object with width 3.5 and height 35.9
	Rectangle Rectangle2(3.5, 35.9);
	cout << Rectangle2.printRectangle() << endl;

	return 0;
}

// Author: Javier Garcia
// Date Created: October 8, 2023