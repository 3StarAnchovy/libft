/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:49:18 by jihong            #+#    #+#             */
/*   Updated: 2021/11/16 16:10:36 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<unistd.h>
#include<string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == c)
			return ((unsigned char *)(s + i));
		i ++;
	}
	return (NULL);
}

void printMemory(void *ptr)
{
	if(ptr == NULL)
		printf("null");
	else
		printf("%p",ptr);
}

int	main(void)
{
	char a[10] = "abcdef";
	printMemory(memchr(a,'c',3));
	printf("\n");
	printMemory(ft_memchr(a,'c',3));
}
