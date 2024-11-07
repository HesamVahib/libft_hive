#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>

int ft_atoi(const char *str);
void    ft_bzero(void *str, size_t n);
void    *ft_calloc(size_t num, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
const void  *ft_memchr(const void *ptr, int value, size_t num);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *ptr, int value, size_t num);
char    *ft_strchr(char *str, char c);
char    *ft_strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
int ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, int n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(char *str, char c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif