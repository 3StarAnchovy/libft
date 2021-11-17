/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:41:37 by jihong            #+#    #+#             */
/*   Updated: 2021/11/17 16:08:11 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		*(str + i) = *(s1 + i);
		i ++;
	}
	*(str + i) = '\0';
	return (str);
}
