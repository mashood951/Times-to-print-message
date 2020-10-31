#include <iostream>
#include <string>
using namespace std;

int print();
int display();
string msg;

int main()
{
	int a, b;

	print();

	cout << "You can enter either positive or negative number." << endl;
	cout << "How many times do you want to print this message: ";
	cin >> b;
	
	if (b < 0)
	{
	// Prints reverse times (Input in negative number)
		for (a = -1; a >= b; b++)
	
		{
			display();
		}
	}
	else if (b > 0)
	{
	// Prints forward times (Input in positive number)
		for (a = 1; a <= b; a++)
	
		{
			display();
		}
	}
	
	return 0;
}


int print()

{
	cout << "Enter message: ";
	getline(cin, msg);
	return 0;
}

int display()
{
	cout << msg << endl;
	return 0;
}
