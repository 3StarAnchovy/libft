/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:48 by jihong            #+#    #+#             */
/*   Updated: 2021/11/29 17:29:57 by jihong           ###   ########.fr       */
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


static void free_str(char **str)
{
	int	i;

	i = 0;
	while(*(str + i) != NULL)
	{
		free(str + i);
		i ++;
	}
	free(str);
}

static char *get_str(const char *str, int *flag, char c)
{
	char	*middle;
	int		i;

	*flag = 1;
	i = 0;
	while(*(str + i) != '\0')
	{
		if(*(str + i) == c)
		{
			middle = ft_strndup(str,i);
			if(middle == NULL)
				return (NULL);
			return (middle);
		}
		i ++;
	}
	return (NULL);
}

char **ft_split(const char *s, char c)
{
	char	*middle;
	char 	**str;
	int		i;
	int		flag;
	int		str_index;

	str_index = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		flag = 0;
		if ((s[0] != c && i == 0))
		{
			middle = get_str((s + i),&flag,c);
		}
		else if(*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0')
		{
			//str[str_index] = ft_strndup((s + i), word_index);
			//if(str[str_index] == NULL)
			//	free_str(str);
		}
		if (middle == NULL)
		{
			free_str(str);
			return (NULL);
		}
		else
		{
			printf("%s\n",middle);
			str[str_index] = middle;
			str_index ++;
		}
	}
	return (str);
}

int main(void)
{
	char *a = "hello,fxxking,world,,!,";
	//char *b = "abcde";
	char **c = ft_split(a, ',');
	for(int i = 0; i < 4; i ++)
		printf("%s\n",c[i]);
	free_str(c);
	//char *c = ft_strndup(b + 1,2);
	//printf("%s",c);å
}
