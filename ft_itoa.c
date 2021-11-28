/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:43:35 by jihong            #+#    #+#             */
/*   Updated: 2021/11/28 18:51:21 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len ++;
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (10);
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	char		*str;

	len = get_len((size_t)n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
		return ("-2147483648");
	if (str == NULL)
		return (NULL);
	*(str + len) = '\0';
	i = 0;
	if (n < 0)
	{
		*(str + i) = '-';
		n *= -1;
		i ++;
	}
	while (i < len--)
	{
		*(str + len) = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
