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

int _printf(const char *format, ...)
{
	int state = 0;
	char *s, ch;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (state == 0)
		{
			if(*format == '%')
				state = 1;
			else
				_putchar(*format);
		}
		if (state == 1)
		{
			switch(*format)
			{
				case 'c': 
					/* putchar(va_arg(args, int));*/
					ch = va_arg(args, int);
					_putchar(ch);
					state = 0;
					break;
				case 's': 
					s = va_arg(args, char *);
					while (*s)
						_putchar(*s++);
					state = 0;
					break;
					/*State = 0;*/
			}

		}
		format++;
	}
	va_end(args);
	return (0);
}
/*
   void printf(const char *format, ...)
   {
   va_list args;
   va_start (args, format);

   vprintf(format, args);

   va_end(args);
   }*/

int main()
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	return (0);
}
