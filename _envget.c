#include "shell.h"
/**
 * _envget - gets the inputs environment
 * @env: input
 * Return: env without =
 */
char *_envget(char *env)
{
	char *temp, *res;
	int i = 0, n = 0;

	while (environ[i] != NULL)
	{
		if (_strcmp(environ[i], env) == 0)
			temp = environ[i];
		i++;
	}

	while (temp[n] != '\0')
	{
		if (_strcmp(temp, env) == 0)
			res = _strstr(temp, "/");
		n++;
	}
	return (res);
}
