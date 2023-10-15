#include "main.h"

/**
 * fetch_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int fetch_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int x, curr_i;
	int flags = 0;
	const char FLAGS_DC[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARRD[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (x = 0; FLAGS_DC[x] != '\0'; x++)
			if (format[curr_i] == FLAGS_DC[x])
			{
				flags |= FLAGS_ARRD[x];
				break;
			}

		if (FLAGS_DC[x] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flags);
}
