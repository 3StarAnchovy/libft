/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:42:46 by jihong            #+#    #+#             */
/*   Updated: 2021/11/29 22:15:21 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char *strndup(char *str, int n)
// {
// 	int		i;
// 	char	*copy;

// 	copy = (char *)malloc(sizeof(char *) * (n + 1));
// 	if(!copy)
// 		return (NULL);
// 	i = 0;
// 	while(i < n)
// 	{
// 		*(copy + i) = *(str + i);
// 		i ++;
// 	}
// 	*(copy + i) = '\0';
// 	return (copy);
// }

char *ft_strtrim(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (*(s1 + start) && ft_strchr(set,*(s1 + start)))
		start ++;
	return ((char *)(s1 + start));
}
