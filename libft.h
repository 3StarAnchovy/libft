/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:57:21 by jihong            #+#    #+#             */
/*   Updated: 2021/11/12 19:52:55 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
size_t	ft_strlen(const char *c);
size_t	ft_strlcpy(const void *dest, const void *src, size_t size);
