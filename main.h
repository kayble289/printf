#ifndef MAIN_H
#define MAIN_H

#include "cfun.h"
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c); 

/**
 ** _putchar - entry point
 **
 **
 ** Return: 0 (Success)
 **/
int _putchar(char c)
{
        return (write(1, &c, 1));
}

#endif
