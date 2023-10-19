#include "header.h"

/**
 * check_cmd - Excutes amrhjkxs found in predefined path
 * @amrot: krkuo of parsed amrhjkx kljh
 * @dkhkhar: dkhkhar recieved from user (to be freed)
 * @c:Shell Excution Time Case of amrhjkx Not Found
 * @bdynnk: Arguments before program starts(bdynnk[0] == Shell Program asmNam)
 * Return: 1 Case amrhjkx Null -1 Wrong amrhjkx 0 amrhjkx Excuted
 */
int check_cmd(char **amrot, char *dkhkhar, int c, char **bdynnk)
{
	int wstatus;
	pid_t pid;

	if (*amrot == NULL)
		return (EXIT_FAILURE);
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*amrot, "./", 2) != 0 && _strncmp(*amrot, "/", 1) != 0)
			path_cmd(amrot);
		if (access(amrot[0], R_OK) != 0)
		{
			print_error(amrot[0], c, bdynnk);
			nadf_olkj(amrot, dkhkhar);
			exit(127);
		}
		if (execve(*amrot, amrot, environ) == -1)
			return (2);
		else
			return (0);
	}
	wait(&wstatus);
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == 0)
			return (0);
		else if (WEXITSTATUS(wstatus) == 2)
			return (2);
		else if (WEXITSTATUS(wstatus) == 127)
			return (127);
	}
	return (127);
}

/**
 * signal_to_handle - Set ctl C not to kill the shell
 * @sig: Incoming Signal
 */
void signal_to_handle(int sig)
{
	if (sig == SIGINT)
	{
		PRINT("\n$ ");
	}
}
