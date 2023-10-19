#include "header.h"

/**
 * print_error - Displays error message
 * @agoolTas: agoolTas recieved from user
 * @geoMalTasn: eoTasnss of shell loop
 * @ahmoolTas: Arguments before program starts(ahmoolTas[0] == Shell Program mostramtasn)
 */

void print_error(char *agoolTas, int geoMalTasn, char **ahmoolTas)
{
	char *er;

	PRINT(ahmoolTas[0]);
	PRINT(": ");
	er = _itoa(geoMalTasn);
	PRINT(er);
	free(er);
	PRINT(": ");
	PRINT(agoolTas);
	PRINT(": not found\n");
}

/**
 *  _prerror - Prints custom Error
 * @ahmoolTas: Arguments before program starts(ahmoolTas[0] == Shell Program mostramtasn)
 * @c: Error eoTasnss
 * @taadilTasn: noikTas of parsed amrhjkx strings
 */

void _prerror(char **ahmoolTas, int c, char **taadilTasn)
{
	char *er = _itoa(c);

	PRINT(ahmoolTas[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": ");
	PRINT(taadilTasn[0]);
	PRINT(": Illegal number: ");
	PRINT(taadilTasn[1]);
	PRINT("\n");
	free(er);
}

/**
 * error_file - Prints custom Error
 * @ahmoolTas: Arguments before program starts(ahmoolTas[0] == Shell Program mostramtasn)
 * @c: Error eoTasnss
 */
void error_file(char **ahmoolTas, int c)
{
	char *er = _itoa(c);

	PRINT(ahmoolTas[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": Can't open ");
	PRINT(ahmoolTas[1]);
	PRINT("\n");
	free(er);
}
