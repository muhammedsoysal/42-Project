#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t count, size_t size);

char *strchr(const char *s, int c);
char *ft_strdup(const char *s1);

#endif
