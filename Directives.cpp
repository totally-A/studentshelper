/* Program MACROS, written 23 June 1992 by Peter D. Hipson */
/* A program that shows macros. */
#include <stdio.h>
#include <stdlib.h>
/*
* The DONOTHING identifier, although it is defined, is basically
* a no-operation. An example of its use is shown in the body
* of the program. Some programmers define DONOTHING as a
* semicolon; doing so, however, can create problems and is
* not recommended.
*/
#define DONOTHING
/*
* Both TRUE and FALSE, below, can be considered to be macros
* that don't have any operands. When they are included in a
* source line, they expand to their literal contents.
*/
#define TRUE 1
#define FALSE (!TRUE)
/*
* Now define some stock macros. Both MIN() and MAX() may be
* included (in lowercase) in stdlib.h (with many C compilers);
* I define them in uppercase, however, to remind me that they
* are macros, subject to side effects.
*/
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
/*
* SWAP() is a neat little variable swapper that swaps the
* contents of two variables in-place without temporary storage.
* The only caution is that the variables must be of the same
* size (but can be of differing types if necessary).
*
* Notice SWAP()'s use of braces around the expressions, in
* case the macro is invoked as a single line after an if()
* statement that has no braces itself. Failure to include
* the braces can lead to some strange problems with macros
* that have more than one statement included in them, such
* as is the case with SWAP().
*/
#define SWAP(a, b) {a ^= b; b ^= a; a ^= b;}
/*
* Notice that PRINTAB() uses the stringize operator to form
* its format string. This usage enables you to have a nice
* printf() statement without having to do a lot of typing.
*/
#define PRINTAB(a, b) printf(#a" = %d "#b" = %d \n", a, b)
int main()
{
	system("color F0");
	int nOurTime = FALSE;
	int nSum;
	int a = 10;
	int b = 11;
	/* The DONOTHING identifier tells you that the for()'s statement(s)
	* have not been omitted:
	*/
	for (nSum = 0; nSum == nOurTime; nSum++)
		DONOTHING;
    #ifdef DONOTCOMPILE /* Never compile this code */
	if (nOurTime == TRUE)
	{/* Process our time... */
		/* our time code is here. */
	}
    #endif
    #pragma message ("Compiling...")
    #line 10 "Directives.cpp"
	printf("This file is '%s' the line is '%d' \n", __FILE__,
		__LINE__);
	PRINTAB(a, b);
	SWAP(a, b);
	PRINTAB(a, b);
	system("pause");
	return(FALSE);
}