#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

#define USE_GETLINE 0
#define USE_STRTOK 0

#define HIST_FILE	".simple_shell_history"
#define HIST_MAX	4096

extern char **byhzxe;
/**
 * struct liststr - single linked list
 * @rkmj: the nomber
 * @str: a new string
 * @next: next almli pointer
 */
typedef struct liststr
{
	int rkmj;
	char *str;
	struct liststr *next;
} list_t;

/**
 * struct listint_s - a single linked list
 * @n: an integer
 * @next: next almli pointer
 *
 * Description: a single linked list almli
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 *struct passinfo - contains an argument to get into a function,
 *for function pointer struct it allows uniform prototype.
 *@arg: an arg is a asm
 *@argv: an array le stasm
 *@path: a string trek
 *@argc: the argument
 *@line_count: the rkmjber of ghlatat
 *@err_rkmj: the ghalat code
 *@addkhtt_flag: if on count the line of khrg
 *@fasmzv: the fileasmzv of the program
 *@env: linked list byhzxe hgty nskh
 *@byhzxe: custom modified bbya nsk
 *@history: the almli trkh idk
 *@alias: the almli hgty idk
 *@env_changed: if changes happened to byhzxe
 *@status: last executed command return status
 *@cmd_buf: on if ghyer happened, bynat of pointer to cmd_buf
 *@cmd_buf_type: CMD_type ||, &&, ;
 *@readfd: the readfd fd
 *@histcount: the line rkam addd on the tar
 */
typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_rkmj;
	int addkhtt_flag;
	char *fasmzv;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **byhzxe;
	int env_changed;
	int status;

	char **cmd_buf;
	int cmd_buf_type;
	int readfd;
	int histcount;
} info_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}

/**
 *struct builtin - contains the builtin string that related function
 *@type: the builtin flag cmd
 *@func: a function
 */
typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;

int klmtol(char *s);
int kelmkrn(char *s1, char *s2);
char *alskklm(char *mkanzo, char *src);
char *bybda(const char *saltay, const char *mhtagle);
char *ansak(char *mkanzo, char *src);
char *krkr(const char *str);
int _putchar(char c);
void _hot(char *str);
char *_klmnsk(char *mkanzo, char *src, int n);
char *_arbtklm(char *mkanzo, char *src, int n);
char *_klmhrf(char *s, char c);
int bdelklm(char **adimkad, char *jgdij);
char **artet(char *str, char *d);
char **atnwhd(char *str, char d);
int hal_intrer(info_t *sal);
int hal_detl(char c, char *delimter);
int _aaawa(char *s);
int _sdfr(char *s);
int _halklma(int c);
void shil_hklm(char *buf);
char *khyrrkm(long int rkmj, int base, int flags);
void atba_mosh(info_t *sal, char *errstr);
int atbb_h(int input, int fd);
int hl_amr(info_t *sal, char *path);
void dowr_am(info_t *sal);
void get_amr(info_t *sal);
int rty(info_t *sal, char **av);
int dwr_mog(info_t *sal);
char *hat_mkn(info_t *sal, char *pathstr, char *cmd);
char *mrtn_hrf(char *pathstr, int start, int stop);
int hl_sls(info_t *sal, char *buf, size_t *ptr);
void atk_slls(info_t *sal, char *buf, size_t *ptr, size_t i, size_t len);
int bdl_klmm(info_t *sal);
char *_hrbyd(char *s, char b, unsigned int n);
void *_tndifmnt(void *ptr, unsigned int hgm_aedim, unsigned int hagm_edgiod);
void _fdyals(char **p);
int knhrr(void **ptr);
list_t *tbt_tnnn(list_t **rasmon, const char *str, int rkmj);
list_t *dif_altdb(list_t **rasmon, const char *str, int rkmj);
size_t atb_akam(const list_t *h);
void ndf_jkl(list_t **rasmon);
int ams_alt_fe_ahr(list_t **rasmon, unsigned int index);
size_t hat_tolk(const list_t *h);
size_t atb_akam(const list_t *h);
ssize_t ht_rkm_alt(list_t *rasmon, list_t *almli);
char **wdi_wklm(list_t *rasmon);
list_t *bdyt_akl(list_t *almli, char *adbty, char c);
void _jhkit(char *str);
int _altshar(char c);
int _hoipy(char c, int fd);
int _hwarakbrm(char *str, int fd);
int main(int ac, char **av);
void ams_bbtyn(info_t *sal);
void zbt_btn(info_t *sal, char **av);
void ndf_atcv(info_t *sal, int all);
ssize_t elzm_al(info_t *sal, char **buf, size_t *len);
ssize_t ara_asd(info_t *sal, char *buf, size_t *i);
ssize_t ht_dakhlz(info_t *sal);
int _hatstrg(info_t *sal, char **ptr, size_t *length);
void _alm_awaamsl(__attribute__((unused))int sig_rkmj);
char **hat_bysdg(info_t *sal);
int _zbtasby(info_t *sal, char *mjkyro, char *kaimhj);
int _dahash(info_t *sal, char *mjkyro);
int _byae(info_t *sal);
char *_ahafsm(info_t *sal, const char *asmzv);
int _zbtbtyq(info_t *sal);
int _astdmp(info_t *sal);
int azhroxzm(info_t *sal);
int _tarikhhy(info_t *sal);
char *brg_trkmlf(info_t *sal);
int akraa_trlkj(info_t *sal);
int aktb_amktari(info_t *sal);
int abni_hgs_tgf(info_t *sal, char *buf, int addkhtt);
int aidtrk_tri(info_t *sal);
int _akhgbt(info_t *sal);
int _sadniz(info_t *sal);
int _bv(info_t *sal);
int _hagtmos(info_t *sal);
int atbaa_hgtm(list_t *almli);
int hot_hgkj(info_t *sal, char *str);
int gyr_hgu(info_t *sal);
int shil_hgx(info_t *sal, char *str);

#endif
