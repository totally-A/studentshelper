//Using constants
#include <stdio.h>
#include <iostream>
const int SPEEDLIMIT = 55;
const int RATE = 15;
const int FIRST_TICKET = 85;
const int SECOND_TICKET= 95;
const int THIRD_TICKET = 100;
int main()
{
	system("color F0");
	int total, fine, speeding;
	total = 0;
	puts("Speeding Tickets\n");
	/* first ticket */
	speeding = FIRST_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf("For going %d in a %d zone: $%d\n", FIRST_TICKET, SPEEDLIMIT, fine);
	/* second ticket */
	speeding = SECOND_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf("For going %d in a %d zone: $%d\n", SECOND_TICKET, SPEEDLIMIT, fine);
	/* third ticket */
	speeding = THIRD_TICKET - SPEEDLIMIT;
	fine = speeding * RATE;
	total = total + fine;
	printf("For going %d in a %d zone: $%d\n", THIRD_TICKET, SPEEDLIMIT, fine);
	/* Display total */
	printf("\nTotal in fines: $%d\n", total);
	system("pause");
}