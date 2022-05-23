#include <stdio.h>
#include "main.h"
/** main - prints the character strings 'I am a string !'
 *  return: the number of characters printed (excluding the null byte used to
 *  end output to strings)
 */
int main()
{
	char *str;
	str = "I am a string !";
	printf("[%s]\n", str);
	return (_strlen(str));
}
