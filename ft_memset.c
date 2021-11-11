/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:52:39 by jihong            #+#    #+#             */
/*   Updated: 2021/11/10 23:35:28 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
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

int main(void)
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
	memset(arr,'\0',sizeof(int) * 5);
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
	ft_memset(arr,'\0',sizeof(int) * 5);
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		printf(" ");
	}
}
