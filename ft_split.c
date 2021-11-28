/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:48 by jihong            #+#    #+#             */
/*   Updated: 2021/11/29 01:30:26 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int count_word(char const *s, char c)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if ((s[0] != c && i == 0) ||
			(*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0'))
		{
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static char *ft_strndup(const char *str, int len)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if(ret == NULL)
		return (NULL);
	while(i < len)
	{
		*(ret + i) = *(str + i);
		i ++;
	}
	*(ret + i) = '\0';
	return (ret);
}

static void free_str(const char **str)
{
	int	i;

	i = 0;
	while(*(str + i) != '\0')
	{
		free(str + i);
		i ++;
	}
	free(str);
}

char **ft_split(char const *s, char c)
{
	int	str_index;
	int word_index;
	int	i;
	char **str;

	str_index = 0;
	word_index = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		if ((s[0] != c && i == 0) ||
			(*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0'))
		{
			printf("%d\n",word_index);
			str[str_index] = ft_strndup((s + i), word_index);
			if(str[str_index] == NULL)
				free_str(str);
			str_index ++;
			word_index = 0;
		}
		i ++;
		word_index ++;
	}
	return (str);
}

int main(void)
{
	char *a = "hello,fxxking,world,,!,";
	char *b = "abcde";
	char **c = ft_split(a, ',');
	printf("%s",c[0]);
	//char *c = ft_strndup(b + 1,2);
	//printf("%s",c);
}
