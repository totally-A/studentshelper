//Example of using malloc() function
#include <iostream>
#include <cstdlib>

int main()
{
	system("color F0");
	int len;
	
	puts("Input length of string: ");
	scanf("%d", &len);

	char * buffer = (char*)malloc(len + 1);            //dynamic allocation of memory for the character string
	if (buffer == NULL) exit(1);                       //if the memory allocation is not performed then complete the program

	for (int ix = 0; ix < len; ix++)
		buffer[ix] = rand() % 26 + 'a';
	buffer[len] = '\0';                                //null element
	puts("Random string:");
	puts(buffer);
	free(buffer);                                      //make memory free

	system("pause");
}