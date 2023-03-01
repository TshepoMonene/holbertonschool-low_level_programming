#include "main.h"

/**
 *-strlen - returns length of a char
 *
 *return -  interger
 */
int _strlen(char *s)
{

  	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
