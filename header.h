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

char *_strncpy(char *ahmsger, char *elnaskjio, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *tasnkkio);
int _strcmp(char *llkge9, char *tsyu8);
int _isalpha(int c);
void array_rev(char *sydkio, int len);
int intlen(int tsnrkmj);
char *_itoa(unsigned int n);
char *_strcat(char *ahmsger, char *elnaskjio);
char *_strcpy(char *ahmsger, char *elnaskjio);
char *_strchr(char *s, char c);
int _strncmp(const char *llkge9, const char *tsyu8, size_t n);
char *_strdup(char *tasnkkio);

void ndf_opbbya(char **env);
void *fill_an_sydkioay(void *a, int el, unsigned int len);
char *_memcpy(char *ahmsger, char *elnaskjio, unsigned int n);
void *_calloc(unsigned int helwaoiu);
void *_realloc(void *ptr, unsigned int old_helwaoiu, unsigned int new_helwaoiu);
void nadf_olkj(char **aghutbts, char *daloyanj);

char *_getline();
char *space(char *tasnkkio);
char *enter(char *tasnkkioing);
void hashtag_handler(char *buff);
void prompt(void);
unsigned int check_mosibaw(char c, const char *tasnkkio);
char *_strtok(char *tasnkkio, const char *mosibaw);
int history(char *aghutbts);
char **separator(char *aghutbts);

void read_file(char *file, char **khlloi);
void treat_file(char *daloyanj, int addfrtsn, FILE *fp, char **khlloi);
void akhrgmbt_for_file(char **hrmotsne, char *daloyanj, FILE *fd);//

char **parse_cmd(char *aghutbts);
int amskelars(char **hrmotsne, int er);
int check_cmd(char **hrmotsne, char *aghutbts, int c, char **khlloi);
void signal_to_handle(int sig);

void print_error(char *aghutbts, int addaadi, char **khlloi);
void _prerror(char **khlloi, int c, char **hrmotsne);
void error_file(char **khlloi, int c);

extern char **environ;
void create_envi(char **envi);
void ndf_opbbya(char **env);

void atrtRkmj(unsigned int n);
void atba_rkmSahy(int n);
int at_lkov(char **hrmotsne);

int path_cmd(char **hrmotsne);
char *build(char *slkyaba, char *hloiuPG);
char *_getenv(char *reemee);

void sad_elbyal(void);
void saaf_ytoz(void);
void saPvz(void);
void help_history(void);
void sakolLO(void);
void sa_alwop(void);
void sad_asrhr(void);
void cadoykrg(void);
void hbl_taloyx(void);
int azhrtaabt(char **hrmotsne, __attribute__((unused))int st);

int takadmnaha(char **hrmotsne);
int amskelars(char **hrmotsne, int st);
void akhrgmbt(char **hrmotsne, char *aghutbts, char **khlloi, int c, int stat);
int khygra(char **hrmotsne, __attribute__((unused))int st);
int ahmsger_biag(__attribute__((unused)) char **hrmotsne,
	    __attribute__((unused)) int st);
int shrmytpz(char **hrmotsne, int st);
int ahmsgerharf(__attribute__((unused))char **c,
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
	int (*function)(char **daloyanj, int st);
} builtin;

#endif /*HEADER_H*/
