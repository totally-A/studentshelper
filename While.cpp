#include<iostream>
#include<ctime>

int main()
{
	system("color F0");
	srand(time(0));
	int unknown_number = 1 + rand() % 10;              //guessing number
	int enter_number;                                  //value to store the entered number
	puts("Enter unknown number from 1 to 10:");        //begin to guess
	scanf("%d", &enter_number);
	while (enter_number != unknown_number)
	{
		puts("Enter unknown number from 1 to 10:");
		scanf("%d", &enter_number);                    //continue to guess
	}
	puts("You win!!!\n");
	system("pause");
}