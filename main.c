/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:40:47 by jihong            #+#    #+#             */
/*   Updated: 2021/11/30 17:17:25 by jihong           ###   ########.fr       */
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

//memcpy와 memmove의 차이점
//overlap
//dest의 주소가 src의 주소보다 클 경우 overlap 발생
//위의 경우 뒤에서부터 복!사!
// int main(void)
// {
// 	int a[10] = {1,2,3,4,5,6,7,8,9};
// 	//int b[10];

// 	//ft_memmove(a + 1,a,sizeof(int) * 9);
// 	for(int i = 0; i < 10; i ++)
// 		printf("%d ",a[i]);
// 	printf("\n");
// 	printf("%s\n",ft_memmove(a+1,a,0));
// 	for(int i = 0; i < 10; i ++)
// 		printf("%d ",a[i]);
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
// int main(void)
// {
// 	char a[10] = "abcdefg";
// 	char b[10] = "cde";
// 	printf("%s", strnstr("lorem ipsum dolor sit amet","dolor",20));
// 	printf("\n");
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet","dolor",15));
// 	//check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
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

//strchr
// int main(void)
// {
// 	char *a = "abcdbdsadfb";
// 	printf("%s",strchr(a,'b'));
// 	printf("\n");
// 	printf("%p",ft_strchr(a,'\0'));
// }

//putchar
// int main(void)
// {
// 	ft_putchar_fd('c',0);
// }

//putnbr
//itoa
// int main(void)
// {
// 	//ft_putnbr_fd(271,1);
// 	//printf("\n");
// 	printf("%s",ft_itoa(-2147483648LL));
// }

//split
int main(void)
{
	char *a = "hello,fxxking,world,,!,";
	//char *b = "abcde";
	char **c = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	for(int i = 0; i < 10; i ++)
		printf("%s\n",c[0]);
	free(c);
	//char *c = ft_strndup(b + 1,2);
	//printf("%s",c);å
	//kadjsfklajsdfkl;j안해 ^^ㅣ바
}

//strtrim
// int main(void)
// {
// 	printf("%s\n",ft_strtrim("abqbc","abc"));
// 	printf("%s",ft_strchr("abc",'b'));
// }
