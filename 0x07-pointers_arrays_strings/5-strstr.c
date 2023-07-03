#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring
 * Description: finds first instance of needle in haystack
 * Return: pointer to first instance, NULL if not in haystack
 **/

char *_strstr(char *haystack, char *needle)
{
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j])
		{
			if (compare(&haystack[j], needle) == 1)
				return (&haystack[j]);
		}
	}
	return (NULL);
}
