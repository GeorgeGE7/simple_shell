#include "shell.h"

/**
 * brg_trkmlf - function that gets the file of history
 *
 * @sal: structure
 *
 * Return: history file
 */

char *brg_trkmlf(info_t *sal)
{
	char *buf, *pth;

	pth = _ahafsm(sal, "HOME=");
	if (!pth)
		return (NULL);
	buf = malloc(sizeof(char) * (klmtol(pth) + klmtol(HIST_FILE) + 2));
	if (!buf)
		return (NULL);
	buf[0] = 0;
	ansak(buf, pth);
	alskklm(buf, "/");
	alskklm(buf, HIST_FILE);
	return (buf);
}

/**
 * akraa_trlkj - function that reads history file.
 *
 * @sal: the structure
 *
 * Return: history on success, 0 otherwise
 */
int akraa_trlkj(info_t *sal)
{
	int n, e = 0, lc = 0;
	ssize_t fd, len, size = 0;
	struct stat st;
	char *buf = NULL, *fileasmzv = brg_trkmlf(sal);

	if (!fileasmzv)
		return (0);

	fd = open(fileasmzv, O_RDONLY);
	free(fileasmzv);
	if (fd == -1)
		return (0);
	if (!fstat(fd, &st))
		size = st.st_size;
	if (size < 2)
		return (0);
	buf = malloc(sizeof(char) * (size + 1));
	if (!buf)
		return (0);
	len = read(fd, buf, size);
	buf[size] = 0;
	if (len <= 0)
		return (free(buf), 0);
	close(fd);
	for (n = 0; n < size; n++)
		if (buf[n] == '\n')
		{
			buf[n] = 0;
			abni_hgs_tgf(sal, buf + e, lc++);
			e = n + 1;
		}
	if (e != n)
		abni_hgs_tgf(sal, buf + e, lc++);
	free(buf);
	sal->histcount = lc;
	while (sal->histcount-- >= HIST_MAX)
		ams_alt_fe_ahr(&(sal->history), 0);
	aidtrk_tri(sal);
	return (sal->histcount);
}

/**
 * aktb_amktari - function that creates a file, or appends to a file.
 *
 * @sal: structure
 *
 * Return: 1 on success, else -1
 */
int aktb_amktari(info_t *sal)
{
	ssize_t fd;
	char *fileasmzv = brg_trkmlf(sal);
	list_t *temp = NULL;

	if (!fileasmzv)
		return (-1);

	fd = open(fileasmzv, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(fileasmzv);
	if (fd == -1)
		return (-1);
	for (temp = sal->history; temp; temp = temp->next)
	{
		_hwarakbrm(temp->str, fd);
		_hoipy('\n', fd);
	}
	_hoipy(BUF_FLUSH, fd);
	close(fd);
	return (1);
}


/**
 * abni_hgs_tgf - function that adds entry to a history linked list.
 *
 * @sal: Structure
 * @buf: buffer
 * @addkhtt: the history addkhtt, histcount
 *
 * Return: Always 0
 */
int abni_hgs_tgf(info_t *sal, char *buf, int addkhtt)
{
	list_t *temp = NULL;

	if (sal->history)
		temp = sal->history;
	dif_altdb(&temp, buf, addkhtt);

	if (!sal->history)
		sal->history = temp;
	return (0);
}

/**
 * aidtrk_tri - function that rkmj the history linked list.
 *
 * @sal: Structure
 *
 * Return: the starting histcount
 */
int aidtrk_tri(info_t *sal)
{
	list_t *temp = sal->history;
	int n = 0;

	while (temp)
	{
		temp->rkmj = n++;
		temp = temp->next;
	}
	return (sal->histcount = n);
}
