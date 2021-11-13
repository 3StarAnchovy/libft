/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:09:01 by jihong            #+#    #+#             */
/*   Updated: 2021/11/13 19:40:56 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include "ft_strlen.c"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destLen;

	i = 0;
	destLen = ft_strlen(dest);
	if (size != 0 && destLen < size)
	{
		while(i < size - destLen - 1)
		{
			*(dest + destLen + i) = *(src + i);
			i ++;
		}
		*(dest + destLen + i) = '\0';
		return (destLen + i);
	}
	return (ft_strlen(src) + size);
}
