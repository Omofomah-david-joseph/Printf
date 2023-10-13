C - printf

Ptintf project by Omofomah david joseph and Emmanuel Oneyeozu

** Authorized functions and macros used:
	write (man 2 write),
	malloc (man 3 malloc),
	free (man 3 free),
	va_start (man 3 va_start),
	va_end (man 3 va_end),
	va_copy (man 3 va_copy),
	va_arg (man 3 va_arg),

Tasks:

0. Writing a function that produces output according to a format.
	writes output to stdout, (the standard output stream).
	format - is a character string. The format string is composed of zero or more directives.


Function handles the following conversion specifiers:
	c ;
	s ;
	% ;

1. Handles the following conversion specifiers:
	d ;
	i ;

2. Handles the following custom conversion specifiers:

	b: the unsigned int argument is converted to binary

3. Handles the following conversion specifiers:
	u ;
	o ;
	x ;
	X ;

4. * Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handles the following custom conversion specifier:
	S : prints the string.
	
	** Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).


6. Handles the following conversion specifier: p.


7. Handles the following flag characters for non-custom conversion specifiers:
	+ ;
	space ;
	# ;

8. Handles the following length modifiers for non-custom conversion specifiers:
	l ;
	h ;

9. Handles the field width for non-custom conversion specifiers.


10. Handles the precision for non-custom conversion specifiers.


11. Handles the 0 flag character for non-custom conversion specifiers.


12. Handles the - flag character for non-custom conversion specifiers.

13. Handles the following custom conversion specifier:

	r : prints the reversed string

14. Handles the following custom conversion specifier:
      
	R: prints the rot13'ed string


15. Makes All the above options work well together.

