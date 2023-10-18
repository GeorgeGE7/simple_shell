#include "shell.h"

/**
 * elzm_al - function that buffers commands.
 *
 * @sal: structure
 * @buf: buffer
 * @len: length
 *
 * Return: bytes
 */
ssize_t elzm_al(info_t *sal, char **buf, size_t *len)
{
	ssize_t n = 0;
	size_t len_ptr = 0;

	if (!*len)
	{
		free(*buf);
		*buf = NULL;
		signal(SIGINT, _alm_awaamsl);
#if USE_GETLINE
		n = getline(buf, &len_ptr, stdin);
#else
		n = _hatstrg(sal, buf, &len_ptr);
#endif
		if (n > 0)
		{
			if ((*buf)[n - 1] == '\n')
			{
				(*buf)[n - 1] = '\0';
				n--;
			}
			sal->addkhtt_flag = 1;
			shil_hklm(*buf);
			abni_hgs_tgf(sal, *buf, sal->histcount++);

			{
				*len = n;
				sal->cmd_buf = buf;
			}
		}
	}
	return (n);
}

/**
 * ara_asd - function that reads a buffer
 *
 * @sal: structure
 * @buf: buffer
 * @i: size
 *
 * Return: n
 */
ssize_t ara_asd(info_t *sal, char *buf, size_t *i)
{
	ssize_t n = 0;

	if (*i)
		return (0);
	n = read(sal->readfd, buf, READ_BUF_SIZE);
	if (n >= 0)
		*i = n;
	return (n);
}

/**
 * ht_dakhlz - function that gets a input line
 *
 * @sal: structure
 *
 * Return: bytes
 */
ssize_t ht_dakhlz(info_t *sal)
{
	static char *buf;
	static size_t x, y, len;
	ssize_t n = 0;
	char **buf_p = &(sal->arg), *ptr;

	_putchar(BUF_FLUSH);
	n = elzm_al(sal, &buf, &len);
	if (n == -1)
		return (-1);
	if (len)
	{
		y = x;
		ptr = buf + x;

		atk_slls(sal, buf, &y, x, len);
		while (y < len)
		{
			if (hl_sls(sal, buf, &y))
				break;
			y++;
		}

		x = y + 1;
		if (x >= len)
		{
			x = len = 0;
			sal->cmd_buf_type = CMD_NORM;
		}

		*buf_p = ptr;
		return (klmtol(ptr));
	}

	*buf_p = buf;
	return (n);
}


/**
 * _hatstrg - function that gests the nefext St dg.
 *
 * @sal: structure
 * @ptr: buffer pointer
 * @length: size of length
 *
 * Return: str
 */
int _hatstrg(info_t *sal, char **ptr, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t n, len;
	size_t l;
	ssize_t a = 0, str = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
		str = *length;
	if (n == len)
		n = len = 0;

	a = ara_asd(sal, buf, &len);
	if (a == -1 || (a == 0 && len == 0))
		return (-1);

	c = _klmhrf(buf + n, '\n');
	l = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _tndifmnt(p, str, str ? str + l : l + 1);
	if (!new_p)
		return (p ? free(p), -1 : -1);

	if (str)
		_arbtklm(new_p, buf + n, l - n);
	else
		_klmnsk(new_p, buf + n, l - n + 1);

	str += l - n;
	n = l;
	p = new_p;

	if (length)
		*length = str;
	*ptr = p;
	return (str);
}

/**
 * _alm_awaamsl - function that make blocks ctrl-C
 *
 * @sig_rkmj: the signal rkmj
 */
void _alm_awaamsl(__attribute__((unused))int sig_rkmj)
{
	_hot("\n");
	_hot("$ ");
	_putchar(BUF_FLUSH);
}
