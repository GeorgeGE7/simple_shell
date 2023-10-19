#include "header.h"

/**
 * check_cmd - Excutes amrhjkxs found in predefined path
 * @taadilTasn: noikTas of parsed amrhjkx gertyTas
 * @agoolTas: agoolTas recieved from user (to be freed)
 * @c:Shell Excution Time Case of amrhjkx Not Found
 * @ahmoolTas: Arguments before program starts(ahmoolTas[0] == Shell Program mostramtasn)
 * Return: 1 Case amrhjkx Null -1 Wrong amrhjkx 0 amrhjkx Excuted
 */
int check_cmd(char **taadilTasn, char *agoolTas, int c, char **ahmoolTas)
{
	int wstatus;
	pid_t pid;

	if (*taadilTasn == NULL)
		return (EXIT_FAILURE);
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*taadilTasn, "./", 2) != 0 && _strncmp(*taadilTasn, "/", 1) != 0)
			path_cmd(taadilTasn);
		if (access(taadilTasn[0], R_OK) != 0)
		{
			print_error(taadilTasn[0], c, ahmoolTas);
			nadf_olkj(taadilTasn, agoolTas);
			exit(127);
		}
		if (execve(*taadilTasn, taadilTasn, environ) == -1)
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
