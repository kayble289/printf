#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/** main - prints the character strings 'I am a string !'
 *  return: the number of characters printed (excluding the null byte used to
 *  end output to strings)
 *  State:
 *  0: regular
 *  1: escape
 */
void _printf(const char *format, ...)
{
	int State = 0;
	while(*format) {
		if(State == 0) {
			if(*format == '%') {
				State = 1;
			} else {
				putchar(*format);
			}
		}
	} if(State == 1) {
		switch(*format) {
			case 'c': 
					  putchar(va_arg(args, char));
					  char ch = va_arg(args, int);
					  putchar (ch);
					  break;
				
			case 's': 
					  const char *s = va_arg(args, const char *)
						  while (*s) {
							  putchar(*s++);
						  }
					  break;
				 

				  State = 0;
		}
		format++;
	}
}

void printf(const char *format, ...)
{
	va_list args;
	va_start (args, format);

	vprintf(format, args);

	va_end(args);
}

void main()
{
	void *ptr_to_main = (void *)main;
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	return (void);
}
