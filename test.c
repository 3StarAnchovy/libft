/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:40:47 by jihong            #+#    #+#             */
/*   Updated: 2021/11/22 17:31:13 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void 			*content;
	struct s_list 	*next;
}t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while(lst != NULL)
	{
		lst = lst -> next;
		size ++;
	}
	return (size);
}

void addNode(t_list *list, t_list *new)
{
	list -> next = new;
	new -> next = NULL;
}

void printNode(t_list *list)
{
	while (list != NULL)
	{
		printf("%s",list -> content);
		list = list->next;
	}
}

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	lst1 = ft_lstnew("abc");
	lst2 = ft_lstnew("asdf");
	addNode(lst1,lst2);
	printNode(lst1);
}
