/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:48 by jihong            #+#    #+#             */
/*   Updated: 2021/11/18 17:39:26 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int count_char(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while(*(s + i) != '\0')
	{
		if (*(s + i) == c)
			cnt ++;
		i ++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	int cnt;

	cnt = count_char(s,c);
}

int main(void)
{
	char a[10] = "abcdecfc";
	printf("%d",count_char(a,'c'));
}
