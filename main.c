/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:40:47 by jihong            #+#    #+#             */
/*   Updated: 2021/11/16 16:11:07 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	//printf("%d", ft_isalnum(1));
	//return 1;

	//strlcpy test
	// return : srcLen
	char a[10];
	char b[10] = "abcdef";
	ft_strlcpy(a,b,3);
	printf("%s", a);
}


//strcmp
// int main(void)
// {
// 	char a[10] = "abcd";
// 	char b[10] = "abcde";

// 	printf("%d\n",strncmp(a,b,8));
// 	printf("%d",ft_strncmp(a,b,8));
// }

//memchr.c
// void printMemory(void *ptr)
// {
// 	if(ptr == NULL)
// 		printf("null");
// 	else
// 		printf("%p",ptr);
// }

// int	main(void)
// {
// 	char a[10] = "abcdef";
// 	printMemory(memchr(a,'c',3));
// 	printf("\n");
// 	printMemory(ft_memchr(a,'c',3));
// }

