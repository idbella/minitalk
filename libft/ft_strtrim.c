/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:04:22 by sid-bell          #+#    #+#             */
/*   Updated: 2018/10/12 05:10:38 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *str)
{
	int start;

	start = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
	{
		start++;
		str++;
	}
	return (start);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		start;

	str = NULL;
	if (s)
	{
		start = ft_start(s);
		if (!(str = ft_strsub(s, start, ft_strlen(s) - start)))
			return (NULL);
		ft_strrev(str);
		start = ft_start(str);
		if (!(str = ft_strsub(str, start, ft_strlen(str) - start)))
			return (NULL);
		ft_strrev(str);
	}
	return (str);
}
