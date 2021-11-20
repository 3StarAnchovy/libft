/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:57:21 by jihong            #+#    #+#             */
/*   Updated: 2021/11/20 17:26:06 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *ptr, int value, size_t num);

int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *c);
size_t	ft_strlcpy(const void *dest, const void *src, size_t size);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *block, size_t size);
int	ft_atoi(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);

