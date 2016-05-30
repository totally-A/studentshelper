/* CALLOC1, written 1992 by Peter D. Hipson
* This program allocates arrays of memory.
*/
#include <stdio.h> // Make includes first part of file
#include <string.h> // For string functions
#include <malloc.h> // For memory allocation functions
#include <iostream>
int main(void); // Define main() and establish that this
// program does not use any passed parameters
int main()
{
	system("color F0");
	int i = 0;
	int j = 0;
	int *nPointer[100] = { NULL };
	int nSize = 32767;
	long lTotalBytes = 0;
	while (nSize > 0 && // Make nSize valid
		nSize <= 32767 &&
		lTotalBytes < 2000000) // No more than 2M will be allocated
	{
		nPointer[i] = (int *)calloc(nSize, sizeof(int));
		if (nPointer[i] != NULL)
		{
			++i;
			lTotalBytes += (nSize * sizeof(int));
			printf("Allocated % 5u short int, total % 10ld\n",
				nSize,
				lTotalBytes);
		}
		else
		{
			printf("Couldn’t allocate % 5u short int, total % 10ld\n",
				nSize,
				lTotalBytes);
			nSize /= 2;
		}
	}
	for (j = 0; j < i; j++)
	{
			free(nPointer[j]);
		nPointer[j] = NULL;
	}
	system("pause");
}