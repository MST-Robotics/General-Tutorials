// An example of a submission as detailed by the README
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
