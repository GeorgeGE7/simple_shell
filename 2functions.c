#include "shell.h"

/**
 * hl_sls - function that testes current char
 *
 * @sal: structure
 * @buf: buffer
 * @ptr: pointer
 *
 * Return: 1 if char is chain delimeter, 0 otherwise
 */
int hl_sls(info_t *sal, char *buf, size_t *ptr)
{
	size_t x = *ptr;

	if (buf[x] == '|' && buf[x + 1] == '|')
	{
		buf[x] = 0;
		x++;
		sal->cmd_buf_type = CMD_OR;
	}
	else if (buf[x] == '&' && buf[x + 1] == '&')
	{
		buf[x] = 0;
		x++;
		sal->cmd_buf_type = CMD_AND;
	}
	else if (buf[x] == ';')
	{
		buf[x] = 0;
		sal->cmd_buf_type = CMD_CHAIN;
	}
	else
		return (0);
	*ptr = x;
	return (1);
}


/**
 * atk_slls - function that checks continue based on chain
 *
 * @sal: structure
 * @buf: buffer
 * @ptr: pointer
 * @i: bigginning of buf
 * @len: length of buf
 */
void atk_slls(info_t *sal, char *buf, size_t *ptr, size_t i, size_t len)
{
	size_t x = *ptr;

	if (sal->cmd_buf_type == CMD_AND)
	{
		if (sal->status)
		{
			buf[i] = 0;
			x = len;
		}
	}
	if (sal->cmd_buf_type == CMD_OR)
	{
		if (!sal->status)
		{
			buf[i] = 0;
			x = len;
		}
	}

	*ptr = x;
}

/**
 * bdl_klmm - function that replaces mjkyros
 *
 * @sal: structure
 *
 * Return: 1 on success, 0 on failure
 */
int bdl_klmm(info_t *sal)
{
	int n = 0;
	list_t *temp;

	for (n = 0; sal->argv[n]; n++)
	{
		if (sal->argv[n][0] != '$' || !sal->argv[n][1])
			continue;

		if (!kelmkrn(sal->argv[n], "$?"))
		{
			bdelklm(&(sal->argv[n]),
				krkr(khyrrkm(sal->status, 10, 0)));
			continue;
		}
		if (!kelmkrn(sal->argv[n], "$$"))
		{
			bdelklm(&(sal->argv[n]),
				krkr(khyrrkm(getpid(), 10, 0)));
			continue;
		}
		temp = bdyt_akl(sal->env, &sal->argv[n][1], '=');
		if (temp)
		{
			bdelklm(&(sal->argv[n]),
				krkr(_klmhrf(temp->str, '=') + 1));
			continue;
		}
		bdelklm(&sal->argv[n], krkr(""));

	}
	return (0);
}
