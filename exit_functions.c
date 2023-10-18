#include "shell.h"

/**
 * _akhgbt - function that exits the shell.
 *
 * @sal: Structure
 *
 *  Return: (0) if sal.argv[0] != "exit"
 */
int _akhgbt(info_t *sal)
{
	int e;

	if (sal->argv[1])
	{
		e = _sdfr(sal->argv[1]);
		if (e == -1)
		{
			sal->status = 2;
			atba_mosh(sal, "Illegal number: ");
			_jhkit(sal->argv[1]);
			_altshar('\n');
			return (1);
		}
		sal->err_rkmj = _sdfr(sal->argv[1]);
		return (-2);
	}
	sal->err_rkmj = -1;
	return (-2);
}

/**
 * _sadniz - function that changes the current directory path.
 *
 * @sal: Structure
 *
 *  Return: Always 0 success
 */
int _sadniz(info_t *sal)
{
	char **arg_ar;

	arg_ar = sal->argv;
	_hot("help call works. Function not yet implemented \n");
	if (0)
		_hot(*arg_ar);
	return (0);
}

/**
 * _bv - function that changes the current directory path.
 *
 * @sal: Structure
 *
 * Return: Always 0 success
 */
int _bv(info_t *sal)
{
	char *str, *path, buf[1024];
	int ch;

	str = getcwd(buf, 1024);
	if (!str)
		_hot("TODO: >>getcwd failure emsg here<<\n");
	if (!sal->argv[1])
	{
		path = _ahafsm(sal, "HOME=");
		if (!path)
			ch = chdir((path = _ahafsm(sal, "PWD=")) ? path : "/");
		else
			ch = chdir(path);
	}
	else if (kelmkrn(sal->argv[1], "-") == 0)
	{
		if (!_ahafsm(sal, "OLDPWD="))
		{
			_hot(str);
			_putchar('\n');
			return (1);
		}
		_hot(_ahafsm(sal, "OLDPWD=")), _putchar('\n');
		ch = chdir((path = _ahafsm(sal, "OLDPWD=")) ? path : "/");
	}
	else
		ch = chdir(sal->argv[1]);
	if (ch == -1)
	{
		atba_mosh(sal, "can't cd to ");
		_jhkit(sal->argv[1]), _altshar('\n');
	}
	else
	{
		_zbtasby(sal, "OLDPWD", _ahafsm(sal, "PWD="));
		_zbtasby(sal, "PWD", getcwd(buf, 1024));
	}
	return (0);
}
