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
	switch (input) {
	case 1:            
		printf("Starting a game...\n");
		break;
	case 2:            
		printf("Game is loading...\n");
		break;
	case 3:            
		printf("Going to a multiplayer...\n");
		break;
	case 4:            
		printf("Thank you for the game!");
		break;
	default:            
		printf("Try again!");
		break;
	}
	system("pause");
}