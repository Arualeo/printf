#ifndef MAIN_H
#define MAIN_H

#include<string.h>
#include<unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *str);
int print_int(int num);
int print_percent(void);

#endif
