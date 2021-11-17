/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:52:39 by jihong            #+#    #+#             */
/*   Updated: 2021/11/17 17:46:43 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	if(ptr == NULL)
		return (NULL);
	while(i < num)
	{
		*(unsigned char*)(ptr + i) = (unsigned char)value;
		i ++;
	}
}
