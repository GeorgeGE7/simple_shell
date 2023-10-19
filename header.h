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

void hoblokji(char **env);
void *fill_an_sydkioay(void *a, int el, unsigned int len);
char *_memcpy(char *ahmsger, char *elnaskjio, unsigned int n);
void *_calloc(unsigned int helwaoiu);
void *_realloc(void *ptr, unsigned int old_helwaoiu, unsigned int new_helwaoiu);
void shlllookji(char **aghutbts, char *daloyanj);

char *_getline();
char *space(char *tasnkkio);
char *enter(char *tasnkkioing);
void mogyrelalmac(char *buff);
void prompt(void);
unsigned int check_mosibaw(char c, const char *tasnkkio);
char *_strtok(char *tasnkkio, const char *mosibaw);
int trrtijkoiq(char *aghutbts);
char **afslsloiowqe(char *aghutbts);

void akakatfkjo(char *file, char **khlloi);
void treat_file(char *daloyanj, int addfrtsn, FILE *fp, char **khlloi);
void ahytuOOP_for_file(char **hrmotsne, char *daloyanj, FILE *fd);//

char **ahshhoramrt(char *aghutbts);
int akteldrshy(char **hrmotsne, int er);
int check_cmd(char **hrmotsne, char *aghutbts, int c, char **khlloi);
void shbkayayayb(int sig);

void atbaaeterrrr(char *aghutbts, int addaadi, char **khlloi);
void _prerror(char **khlloi, int c, char **hrmotsne);
void mlfghltfshk(char **khlloi, int c);

extern char **environ; //
void ghyrrabdabya(char **envi);
void hoblokji(char **env);

void afshjybgtyp(unsigned int n);
void ahahattyrq(int n);
int niiiiytko(char **hrmotsne);

int tarijllelamraha(char **hrmotsne);
char *abnishyma(char *slkyaba, char *hloiuPG);
char *_getenv(char *reemee);

void dabbcfgTasn(void);
void ahmoiuy_tr(void);
void t3btgiOP(void);
void hleopoiu(void);
void mnjkloi(void);
void asdqwernm(void);
void arabiamshya(void);
void thirdwahda(void);
int ahnedrahwgh(char **hrmotsne, __attribute__((unused))int st);

int afshkhyaboamo(char **hrmotsne);
int akteldrshy(char **hrmotsne, int st);
void ahytuOOP(char **hrmotsne, char *aghutbts, char **khlloi, int c, int stat);
int kfyayayaya(char **hrmotsne, __attribute__((unused))int st);
int shiaakbirgdn(__attribute__((unused)) char **hrmotsne,
	    __attribute__((unused)) int st);
int meshkjhya(char **hrmotsne, int st);
int gdaayagei(__attribute__((unused))char **c, __attribute__((unused)) int st);

/**
 * struct _builtin - Show somthing that somthing-in amrhjkxs
 * with their no go ytra going to do a invoke
 * @amrhjkx: - Not esayd-in amrhjkx
 * @function: - Any thing done to come to any thing
 * same methods like a somthing-on amrhjkxs
 */
typedef struct _builtin
{
	char *amrhjkx;
	int (*function)(char **daloyanj, int st);
} builtin;

#endif /*HEADER_H*/
