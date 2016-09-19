#include <iostream>
using namespace std;

/*
FOR LOOPS is a counter-controlled loop

We use a for loop when we know how many times the loop body
needs to execute -OR- we can figure it out in code by the 
time we get to the loop.

Syntax:

	for (initialize counter; expression; update counter)
	{
		statement1;
		statement2;
		statement3;
	}

	Intitialize: Counter: where do i start counting from?
	Expression: Compare the counter to the stopping place.
	Update: What increment/decrement will it count by?

*/

int main()
{
	//display a count from 1 to 10
	for (int x = 1; x <= 10; x++)
		cout << x << " ";

	cout << endl << endl;

	//count from 2 to 20 by 2's
	for (int a = 2; a <= 20; a = a + 2)
		cout << a << " ";

	cout << endl << endl;

	//count from 100 to 0 by 4's
	for (int b = 100; b >= 0; b = b - 4)
		cout << b << " ";

	cout << endl << endl;

	//prompt the user for a number
	//loop that number of times 
	//each time you loop, display a $
	int iNum;
	cout << "Enter a number: ";
	cin >> iNum;

	for (int x = 1; x <= iNum; x++)
		cout << "$ ";

	cout << endl << endl;

	return 0;
}