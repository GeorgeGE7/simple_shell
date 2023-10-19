#include "header.h"

/**
 * print_error - Displays error message
 * @dkhkhar: dkhkhar recieved from user
 * @addaadi: Count of shell loop
 * @bdynnk: Arguments before program starts(bdynnk[0] == Shell Program asmNam)
 */

void print_error(char *dkhkhar, int addaadi, char **bdynnk)
{
	char *er;

	PRINT(bdynnk[0]);
	PRINT(": ");
	er = _itoa(addaadi);
	PRINT(er);
	free(er);
	PRINT(": ");
	PRINT(dkhkhar);
	PRINT(": not found\n");
}

/**
 *  _prerror - Prints custom Error
 * @bdynnk: Arguments before program starts(bdynnk[0] == Shell Program asmNam)
 * @c: Error Count
 * @amrot: krkuo of parsed amrhjkx strings
 */

void _prerror(char **bdynnk, int c, char **amrot)
{
	char *er = _itoa(c);

	PRINT(bdynnk[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": ");
	PRINT(amrot[0]);
	PRINT(": Illegal number: ");
	PRINT(amrot[1]);
	PRINT("\n");
	free(er);
}

/**
 * error_file - Prints custom Error
 * @bdynnk: Arguments before program starts(bdynnk[0] == Shell Program asmNam)
 * @c: Error Count
 */
void error_file(char **bdynnk, int c)
{
	char *er = _itoa(c);

	PRINT(bdynnk[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": Can't open ");
	PRINT(bdynnk[1]);
	PRINT("\n");
	free(er);
}
