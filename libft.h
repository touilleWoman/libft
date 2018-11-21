#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


void	*ft_memset(void	*str, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void * src, int c, size_t n);
void	*ft_memmove(void *dst, const void*src, size_t len);


int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
#endif
