#ifndef HEADER_H
#define HEADER_H

#define PRINT(c) (write(STDERR_FILENO, c, _strlen(c)))
#define BUFSIZE 10240
#define DELIMITER " \t\r\n\a"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

char *_strncpy(char *ghyTasGeo, char *gasrmkTas, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *gertyTas);
int _strcmp(char *gertyTasneem, char *gertyuTas);
int _isalpha(int c);
void array_rev(char *noikTas, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *ghyTasGeo, char *gasrmkTas);
char *_strcpy(char *ghyTasGeo, char *gasrmkTas);
char *_strchr(char *s, char c);
int _strncmp(const char *gertyTasneem, const char *gertyuTas, size_t n);
char *_strdup(char *gertyTas);

void fkispyrtas(char **env);
void *fill_an_noikTasay(void *a, int el, unsigned int len);
char *_memcpy(char *ghyTasGeo, char *gasrmkTas, unsigned int n);
void *_calloc(unsigned int failTas);
void *_realloc(void *ptr, unsigned int old_failTas, unsigned int new_failTas);
void nadf_olkj(char **agoolTas, char *asdtasn);

char *_getline();
char *space(char *gertyTas);
char *enter(char *gertyTasing);
void hashtag_handler(char *buff);
void prompt(void);
unsigned int check_delim(char c, const char *gertyTas);
char *_strtok(char *gertyTas, const char *delim);
int history(char *agoolTas);
char **separator(char *agoolTas);

void read_file(char *file, char **ahmoolTas);
void treat_file(char *asdtasn, int eoTasnss, FILE *fp, char **ahmoolTas);
void bycasMtas_for_file(char **taadilTasn, char *asdtasn, FILE *fd);

char **parse_cmd(char *agoolTas);
int iuitasMtas(char **taadilTasn, int er);
int check_cmd(char **taadilTasn, char *agoolTas, int c, char **ahmoolTas);
void signal_to_handle(int sig);

void print_error(char *agoolTas, int geoMalTasn, char **ahmoolTas);
void _prerror(char **ahmoolTas, int c, char **taadilTasn);
void error_file(char **ahmoolTas, int c);

extern char **environ;
void create_envi(char **envi);
void fkispyrtas(char **env);

void nlxspyrtas(unsigned int n);
void srwpyrtas(int n);
int nltGpyrtas(char **taadilTasn);

int path_cmd(char **taadilTasn);
char *build(char *tasGeotas, char *tasgmtasn);
char *_getenv(char *mostramtasn);

void funtasn(void);
void funtasntasn(void);
void newasntasn(void);
void gnewasntas(void);
void getwasntas(void);
void mdtoitas(void);
void mdtoitasGtas(void);
void ntoitasGtas(void);
int hhitasGtas(char **taadilTasn, __attribute__((unused))int st);

int iuitasGtas(char **taadilTasn);
int iuitasMtas(char **taadilTasn, int st);
void bycasMtas(char **taadilTasn, char *agoolTasn,
		char **ahmoolTas, int c, int stat);
int bycaartas(char **taadilTasn, __attribute__((unused))int st);
int qzyrtas(__attribute__((unused)) char **ta, __attribute__((unused)) int st);
int shimyrtas(char **taadilTasn, int st);
int laspyrtas(__attribute__((unused))char **c, __attribute__((unused))int st);

/**
 * struct _builtin - Taarif a shiaa ele conatins mabni amrhjkxs
 * with their respective implementation functions
 * @amrhjkx: - Built-in amrhjkx
 * @function: - Somthing to not same method that contain
 * similar functionalities as the built-in amrhjkxs
 */
typedef struct _builtin
{
	char *amrhjkx;
	int (*function)(char **asdtasn, int st);
} builtin;

#endif /*HEADER_H*/
