//defines the entry point for the console application
#include <iostream>
using namespace std;

void example();
int variable = 48; //initialization of a global variable

int main()
{
	system("color F0");
	int variable = 12; //initialization of a local variable
	cout << "local  variable = " << variable << endl; //printing value contained in the local variable
	example(); //function start
	system("pause");
}

void example()
{
	cout << "global variable = " << variable << endl; //function sees only the global variable
}