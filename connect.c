#include "shell.h"
/**
 * connect - It will check to see whether we are dealing with a builtin or not
 * @checker: Figures out what to execute
 * @args: Arguments passed from cmdline broken up
 * Return: 1 if user entered a path/builtin, 2 if user entered a binary
 */
int bridge(char *checker, char **args)
{
	int i = 0;

	if (builtins_checker(args) == 1)
		return (1);
	while (checker[i] != '\0')
	{
		if (checker[i] == '/')
			return (1);
		i++;
	}
	return (2);
}
