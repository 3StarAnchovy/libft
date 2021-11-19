/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:40:47 by jihong            #+#    #+#             */
/*   Updated: 2021/11/19 19:02:35 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int main()
// {
// 	//printf("%d", ft_isalnum(1));
// 	//return 1;

// 	//strlcpy test
// 	// return : srcLen
// 	char a[10];
// 	char b[10] = "abcdef";
// 	ft_strlcpy(a,b,3);
// 	printf("%s", a);
// }


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


//memcmp
// int main(void)
// {
// 	char a[10] = "abcdef";
// 	char b[10] = "abcgef";
// 	printf("%d",memcmp(a,b,6));
// 	printf("\n");
// 	printf("%d",ft_memcmp(a,b,6));
// }


//strnstr
//int main(void)
//{
// 	char a[10] = "abcdefg";
// 	char b[10] = "cde";
// 	printf("%s", strnstr(a,b,2));
// 	printf("\n");
// 	printf("hid");
// 	printf("%s", ft_strnstr(a,b,-1));
// }

//ft_strdup
// int main(void)
// {
// 	char a[10];
// 	char *str;
// 	str = strdup(a);
// 	printf("%s",str);
// 	free(str);

// 	char b[10] = "asdf";
// 	printf("\n");
// 	str = ft_strdup(b);
// 	printf("%s",str);
// 	free(str);
// }


//calloc
// int main(void)
// {
// 	char *str;
// 	char *str2;

// 	str = (char *)calloc(5,sizeof(char));
// 	printf("%s",str);
// 	printf("\n");
// 	for(int i=0;i<5;i++)
// 	{
// 		printf("%d\n",str[i]);
// 	}
// 	str2 = ft_calloc(5,sizeof(char));
// 	printf("%s",str);
// 	printf("\n");
// 	for(int i=0;i<5;i++)
// 	{
// 		printf("%d\n",str[i]);
// 	}
// }

//substr
// int main(void)
// {
// 	char *substr;
// 	char a[50] = "abcdefg";

// 	substr = ft_substr(a,2,2);
// 	printf("%s",substr);
// 	free(substr);
// }

// strjoin
// int main(void)
// {
// 	char a[10] = "abcd";
// 	char b[10] = "asdf";

// 	char *sum;
// 	sum = ft_strjoin(a,b);
// 	printf("%s",sum);
// }

// //strlcpy
// int	main(void)
// {

// 	char a[15] = "loren ipsum dol";
// 	char p[15];
// 	strlcpy(p,a,3);
// 	printf("%s",p);
// 	printf("\n");
// 	ft_strlcpy(p,a,0);
// 	printf("%s",p);
// }

//strlcat
// int main(void)
// {
// 	char a[30] = "1234";
// 	char *src = "456789";
// 	int c = ft_strlcat(a,src,4);
// 	printf("%d -- %s",c,a);
// }

int main(void)
{
	char *a = "abc";
	printf("%p",strchr(a,'\0'));
	printf("\n");
	printf("%p",ft_strchr(a,'\0'));
}
