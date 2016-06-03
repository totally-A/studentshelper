//defines the entry point for the console application
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	system("color F0");

	int input;

	printf("1. Play a game\n");
	printf("2. Load a game\n");
	printf("3. Go to a multiplayer\n");
	printf("4. Exit\n");
	printf("Choice:\n");

	scanf("%d", &input);
	if (input == 1) printf("Starting a game...\n");
	else if (input == 2) printf("Game is loading...\n");
	     else if (input == 3) printf("Going to a multiplayer...\n");
		      else if (input == 4) printf("Thank you for the game!");
			       else printf("Try again!");
	system("pause");
}