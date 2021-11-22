/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:40:47 by jihong            #+#    #+#             */
/*   Updated: 2021/11/22 18:02:20 by jihong           ###   ########.fr       */
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

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	*lst = new; //맨앞 주소 저장
	// 몰?루?
	// new
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

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while(lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	last = ft_lstlast(*lst);
	last -> next = new;
	new ->next = NULL;
}

int main(void)
{
	t_list *lst1;
	t_list *lst2;
	t_list *lst3;
	lst1 = ft_lstnew("abc/ ");
	lst2 = ft_lstnew("asdf/ ");
	lst3 = ft_lstnew("first/ ");
	addNode(lst1,lst2);
	ft_lstadd_front(&lst1,lst3);
	printNode(lst1);
	printf("\n size : %d",ft_lstsize(lst1));
	printf("\n last Node : ");
	printNode(ft_lstlast(lst1));
	printf("\n");

	t_list *last;
	last = ft_lstnew("last");
	ft_lstadd_back(&lst1,last);
	printNode(lst1);
}
