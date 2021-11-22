/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:43:35 by jihong            #+#    #+#             */
/*   Updated: 2021/11/22 19:26:25 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len ++;
	else if (n == 0)
		return (1);
	else
	{
		while (n != 0)
		{
			n /= 10;
			len ++;
		}
	}
	return (len);
}

static char	*rev_str(char *str)
{
	int	len;
	int	i;
	char temp;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		temp = *(str + i);
		*(str + i) = *(str + len - i);
		*(str + len - i) = temp;
		i ++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;

	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		*(str + i) = '-';
		i ++;
	}
	while (i < len)
	{
		*(str + i) = '0' + (n % 10);
		n /= 10;
		i ++;
	}
	*(str + i) = '\0';
	rev_str(str);
	return (str);
}
