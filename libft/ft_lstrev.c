/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 05:47:06 by sid-bell          #+#    #+#             */
/*   Updated: 2018/10/17 05:47:09 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrev(t_list *list)
{
	t_list *next;
	t_list *previous;

	previous = NULL;
	while (list)
	{
		next = list->next;
		list->next = previous;
		previous = list;
		list = next;
	}
	return (previous);
}
