/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:48 by jihong            #+#    #+#             */
/*   Updated: 2021/11/21 15:33:31 by jihong           ###   ########.fr       */
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

char	*fr_str(char *str)
{

}

static char *get_str(char *str, int c)
{

}

char **ft_split(char const *s, char c)
{
	int	cnt;
	int	str_index;
	int	i;
	char **str;

	str_index = 0;
	i = 0;
	cnt = count_word(s, c);
	str = (char **)malloc(sizeof(char *) * cnt);
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		if ((s[0] != c && i == 0) ||
			(*(s + i) == c && *(s + i + 1) != c && *(s + i + 1) != '\0'))
		{
			str[str_index] = get_str(s + i, c);
			if(str[str_index] == NULL)
				return (NULL);
		}
	}
}

int main(void)
{
	char *a = "hello,fxxking,world,,!,";
	printf("%d", count_word(a, ','));
}
