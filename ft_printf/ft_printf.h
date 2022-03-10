#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *, ...);
int ft_printstr(char *str);
int ft_putchar(char c);
int control(va_list arg, char format);
int hex_system(unsigned int n, char c);
int ptr_(unsigned long n);
int ptryaz(unsigned long n);
int ft_uitoa(unsigned int n);
int basamak_say(unsigned int sayi);
int get_len(int nbr);
char *ft_strdup(const char *str);
char *ft_itoa(int n);
size_t  ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

#endif