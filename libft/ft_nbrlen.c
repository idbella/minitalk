/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <sid-bell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 21:41:22 by sid-bell          #+#    #+#             */
/*   Updated: 2019/02/03 00:42:47 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long int n, int base)
{
	int lenght;

	lenght = n <= 0 ? 1 : 0;
	while (n)
	{
		lenght++;
		n /= base;
	}
	return (lenght);
}
