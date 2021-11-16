/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:11:02 by jihong            #+#    #+#             */
/*   Updated: 2021/11/16 18:21:03 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && i < len)
	{
		if (*(haystack + i) == *needle)
		{
			j = 1;
			while (*(haystack + i + j) == *(needle + j))
			{
				if (*(needle + j + 1) == '\0')
					return ((char *)(haystack + i));
				j ++;
			}
		}
		i ++;
	}
	return (NULL);
}

int main(void)
{
	char a[10] = "abcdefg";
	char b[10] = "cde";
	printf("%s", strnstr(a,b,2));
	printf("\n");
	printf("hid");
	printf("%s", ft_strnstr(a,b,-1));
}
