/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:04:21 by jihong            #+#    #+#             */
/*   Updated: 2021/11/17 18:20:56 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int 	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if(substr == NULL)
		return NULL;
	while(start < len)
	{
		*(substr + i) = *(s + start);
		i ++;
		start ++;
	}
	*(substr + i) = '\0';
	return (substr);
}
