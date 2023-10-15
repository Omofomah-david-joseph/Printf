#include "main.h"

void print_buff(char buffer[], int *buff_idx);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_idx = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_idx++] = format[i];
			if (buff_idx == BUFF_SIZE)
				print_buff(buffer, &buff_idx);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buff(buffer, &buff_idx);
			flags = fetch_flags(format, &i);
			width = fetch_width(format, &i, list);
			precision = fetch_precision(format, &i, list);
			size = fetch_size(format, &i);
			++i;
			printed = keep_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buff(buffer, &buff_idx);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buff - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_idx: Index at which to add next char, represents the length.
 */
void print_buff(char buffer[], int *buff_idx)
{
	if (*buff_idx > 0)
		write(1, &buffer[0], *buff_idx);

	*buff_idx = 0;
}
