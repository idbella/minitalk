/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 23:19:05 by sid-bell          #+#    #+#             */
/*   Updated: 2018/10/17 23:19:07 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strctrim(char const *str, char c)
{
	while (str[0] == c)
	{
		if (!(str = ft_strsub(str, 1, ft_strlen(str) - 1)))
			return (NULL);
	}
	while (*str && str[ft_strlen(str) - 1] == c)
	{
		if (!(str = ft_strsub(str, 0, ft_strlen(str) - 1)))
			return (NULL);
	}
	return ((char *)str);
}
