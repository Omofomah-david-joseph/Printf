#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED_VARIABLE(x) (void)(x)
#define BUFF_SIZE 1024



/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16



/* SIZES */
#define S_LONG 2
#define S_SHORT 1



/**
 * struct alx - Struct op
 *
 * @alx: The format.
 * @se: The function associated.
 */
struct alx
{
	char alx;
	int (*se)(va_list, char[], int, int, int, int);
};



/**
 * typedef struct alx alx_t - Struct op
 *
 * @alx: The format.
 * @alx_t: The function associated.
 */
typedef struct alx alx_t;

int _printf(const char *format, ...);
int keep_print(const char *alx, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

void print_buff(char buffer[], int *buff_idx);



int fetch_flags(const char *format, int *i);
int fetch_width(const char *format, int *i, va_list list);
int fetch_precision(const char *format, int *i, va_list list);
int fetch_size(const char *format, int *i);

int is_digit_n(char c);



/* Funtions that prints chars, strings and percentage sign */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent_sign(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int handle_write_char(char c, char buffer[],
        int flags, int width, int precision, int size);



/* Functions that prints numbers */
int print_integer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_un_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned_value(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_un_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_deci(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_up(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_x, int width, int precision, int size);




/* Function that prints non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);


/* Funcion that print memory address */
int print_pointer_ad(va_list types, char buffer[],
	int flags, int width, int precision, int size);


/*Function that print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function that print a string in rot 13*/
int print_rot13_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);


int write_unsgnd(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);

long int convert_size_unsgnd(unsigned long int num, int size);


int print_integer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);

int write_num(int ind, char buffer[],
	int flags, int width, int prec,
	int length, char padd, char extra_c);

long int convert_size_number(long int num, int size);

int write_pointer(char buffer[], int ind, int length,
        int width, int flags, char padd, char extra_c, int padd_start);

int append_hexa_code(char ascii_code, char buffer[], int i);

int is_printable(char c);





#endif /* MAIN_H */
