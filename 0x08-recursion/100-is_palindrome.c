#include "main.h"
#include <stdio.h>

/**
 * last_index - check the code
 *
 *
 * @s: blabla
 *
 *
 *
 * Return: void
*/

int is_palindrome(char *s);
int last_index(char *s)
int check(char *s, int st, int e, int m);
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}


/**
 * is_palindrome - check the code
 *
 *
 * @s: blabla
 *
 *
 *
 * Return: void
*/

int is_palindrome(char *s)
{
	int e = last_index(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - check the code
 *
 *
 * @s: blabla
 * @st: blabla
 * @e: lkjkah
 * @m: jsds
 *
 *
 * Return: void
*/

int check(char *s, int st, int e, int m)
{
	if ((st == e && m != 0) || (st == e + 1 && m == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (check(s, st + 1, e - 1, m));
}
