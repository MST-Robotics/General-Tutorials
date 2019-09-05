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

int main()
{
	int x
	cout << "this is the basic example" << endl;
	cout << "give x as long as it is less than 5: ";
	cin >> x;
	while (x > 5)//trapping you in an infinite loop
	{
		cout << "dafdadadadfad" << endl;
	}
	for (int i = x; i < 5; i++)//adding two to x
	{
		int x = x + 2;

	}
	cout << x << endl;
	random_function(x);

  return 0;
}


void function(int x)
{
	cout << "random function call" << endl;
	return 0;
}
