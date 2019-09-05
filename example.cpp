/*
general c++ file for members to copy from github through
visual studio
Create a branch with your first name as the branch name
*/


/*
Create a short program that showcases your programming skill level
Have it at least show the basics you know
show the way you write, indent, comment, name variables, etc
It doesn't have to compile
*/

//example
#include <stdio.h>
#include <iostream>

using namespace std;

// Bring values outside of +-500 to +-500
void reduce(int* x)
{
	if (abs(*x) > 500)
	{
		*x = copysign(500, *x);
	}
}


int main()
{
	// count up in same line
	for (int x = 0; x <= 10000; ++x)
	{
		cout << "\33[2K Current number: " << x << "\r";
	}
	cout << endl;

	int x = 1000;
	int y = -1000;

	int* vals[] = { &x, &y };

	for (int* num : vals)
	{
		reduce(num);
	}

	cout << "X: " << x << endl
		<< "Y: " << y << endl;



	return 0;
}
