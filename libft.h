/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:35:19 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:28:06 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>
// Prototypes

int     ft_isalpha(int character);

int     ft_isdigit(int character);

int     ft_isalnum(int character);

int     ft_isascii(int character);

int     ft_isprint(int character);

int     ft_strlen(const char *character);

void    ft_memset(char *character, int c, int n);

void    ft_bzero (char *character, int n);

void    ft_memcpy(char *dest, char *src, int n);

void    ft_memmove(char *dest1, char *src1, int n);

size_t  ft_strlcpy(char *dest, char *src, size_t n);

size_t  ft_strlcat(char *dest, char *src, size_t n);

int     ft_toupper(int c);

int     ft_tolower(int c);

char    *ft_strchr(char *str, int c);

char    *ft_strrchr(char *str, int c);

size_t  ft_strncmp(char *str1, char *str2, size_t n);

char    *ft_memchr(char *str, int c, size_t n);

int     ft_memcmp(char *str1, char *str2, size_t n);

char    *ft_strnstr(char *haystack, char *needle, size_t len);

int     ft_atoi(char *str);

void    *ft_calloc(size_t nitems, size_t size);

char    *ft_strdup(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len);

char    *ft_strjoin(char const *s1, char const *s2);

char    *ft_strtrim(char const *s1, char const *s2);