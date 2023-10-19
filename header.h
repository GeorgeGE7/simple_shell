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

char *_strncpy(char *jjiuty, char *msdr, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *kljh);
int _strcmp(char *kl5, char *jjiu8);
int _isalpha(int c);
void array_rev(char *krkuo, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *jjiuty, char *msdr);
char *_strcpy(char *jjiuty, char *msdr);
char *_strchr(char *s, char c);
int _strncmp(const char *kl5, const char *jjiu8, size_t n);
char *_strdup(char *kljh);

void ndf_opbbya(char **env);
void *fill_an_krkuoay(void *a, int el, unsigned int len);
char *_memcpy(char *jjiuty, char *msdr, unsigned int n);
void *_calloc(unsigned int hgmot);
void *_realloc(void *ptr, unsigned int old_hgmot, unsigned int new_hgmot);
void nadf_olkj(char **dkhkhar, char *strnh);

char *_getline();
char *space(char *kljh);
char *enter(char *kljhing);
void hashtag_handler(char *buff);
void prompt(void);
unsigned int check_delim(char c, const char *kljh);
char *_strtok(char *kljh, const char *delim);
int history(char *dkhkhar);
char **separator(char *dkhkhar);

void read_file(char *file, char **bdynnk);
void treat_file(char *strnh, int count, FILE *fp, char **bdynnk);
void akhrgmbt_for_file(char **amrot, char *strnh, FILE *fd);

char **parse_cmd(char *dkhkhar);
int amskelars(char **amrot, int er);
int check_cmd(char **amrot, char *dkhkhar, int c, char **bdynnk);
void signal_to_handle(int sig);

void print_error(char *dkhkhar, int addaadi, char **bdynnk);
void _prerror(char **bdynnk, int c, char **amrot);
void error_file(char **bdynnk, int c);

extern char **environ;
void create_envi(char **envi);
void ndf_opbbya(char **env);

void atrtRkmj(unsigned int n);
void atba_rkmSahy(int n);
int at_lkov(char **amrot);

int path_cmd(char **amrot);
char *build(char *wahfFg, char *aikimal);
char *_getenv(char *asmNam);

void sad_elbyal(void);
void saaf_ytoz(void);
void saPvz(void);
void help_history(void);
void sakolLO(void);
void sa_alwop(void);
void sad_asrhr(void);
void cadoykrg(void);
void hbl_taloyx(void);
int azhrtaabt(char **amrot, __attribute__((unused))int st);

int takadmnaha(char **amrot);
int amskelars(char **amrot, int st);
void akhrgmbt(char **amrot, char *dkhkhar, char **bdynnk, int c, int stat);
int khygra(char **amrot, __attribute__((unused))int st);
int jjiuty_biag(__attribute__((unused)) char **amrot,
	    __attribute__((unused)) int st);
int shrmytpz(char **amrot, int st);
int jjiutyharf(__attribute__((unused))char **c,
		__attribute__((unused)) int st);

/**
 * struct _builtin - Defines a struct that conatins built-in amrhjkxs
 * with their respective implementation functions
 * @amrhjkx: - Built-in amrhjkx
 * @function: - Pointer to custom functions that have
 * similar functionalities as the built-in amrhjkxs
 */
typedef struct _builtin
{
	char *amrhjkx;
	int (*function)(char **strnh, int st);
} builtin;

#endif /*HEADER_H*/
