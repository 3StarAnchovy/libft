/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:52:39 by jihong            #+#    #+#             */
/*   Updated: 2021/11/10 21:56:59 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>

void *ft_memset(void *ptr, int value, size_t num)
{
	int	i;

	i = 0;
	if(ptr == '\0')
		return ('\0');
	while(i < value)
	{
		(unsigned char*)(ptr+i) = (unsigned char)value;
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
}
