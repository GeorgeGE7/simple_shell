#include "header.h"

/**
 * print_error - Displays error message
 * @aghutbts: aghutbts recieved from user
 * @addaadi: addfrtsn of shell loop
 * @khlloi: Arguments before program starts(khlloi[0] == Shell Program reemee)
 */

void print_error(char *aghutbts, int addaadi, char **khlloi)
{
	char *er;

	PRINT(khlloi[0]);
	PRINT(": ");
	er = _itoa(addaadi);
	PRINT(er);
	free(er);
	PRINT(": ");
	PRINT(aghutbts);
	PRINT(": not found\n");
}

/**
 *  _prerror - Prints custom Error
 * @khlloi: Arguments before program starts(khlloi[0] == Shell Program reemee)
 * @c: Error addfrtsn
 * @hrmotsne: sydkio of parsed amrhjkx strings
 */

void _prerror(char **khlloi, int c, char **hrmotsne)
{
	char *er = _itoa(c);

	PRINT(khlloi[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": ");
	PRINT(hrmotsne[0]);
	PRINT(": Illegal number: ");
	PRINT(hrmotsne[1]);
	PRINT("\n");
	free(er);
}

/**
 * error_file - Prints custom Error
 * @khlloi: Arguments before program starts(khlloi[0] == Shell Program reemee)
 * @c: Error addfrtsn
 */
void error_file(char **khlloi, int c)
{
	char *er = _itoa(c);

	PRINT(khlloi[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": Can't open ");
	PRINT(khlloi[1]);
	PRINT("\n");
	free(er);
}
