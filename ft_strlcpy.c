/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:58:10 by jihong            #+#    #+#             */
/*   Updated: 2021/11/12 19:49:33 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(const void *dest, const void *src, size_t size)
{
	size_t	i;
	int		srcLen;

	(size_t)srcLen = ft_strlen(src);
	i = 0;
	while(i < srcLen && i < size - 1)
	{
		*(char *)(dest + i) = *(const char *)(src + i);
		i ++;
	}
	*(char *)(dest + i) = '\0';

	return srcLen;
}

int main(void)
{

}
