#include "main.h"

/**
 * keep_print - Prints an argument based on its type
 * @alx: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @id: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int keep_print(const char *alx, int *id, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	alx_t alx_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent_sign},
		{'i', print_integer}, {'d', print_integer}, {'b', print_un_binary},
		{'u', print_unsigned_value}, {'o', print_un_octal}, {'x', print_hexa_deci},
		{'X', print_hex_up}, {'p', print_pointer_ad}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13_string}, {'\0', NULL}
	};
	for (i = 0; alx_types[i].alx != '\0'; i++)
		if (alx[*id] == alx_types[i].alx)
			return (alx_types[i].se(list, buffer, flags, width, precision, size));

	if (alx_types[i].alx == '\0')
	{
		if (alx[*id] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (alx[*id - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*id);
			while (alx[*id] != ' ' && alx[*id] != '%')
				--(*id);
			if (alx[*id] == ' ')
				--(*id);
			return (1);
		}
		unknow_len += write(1, &alx[*id], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
