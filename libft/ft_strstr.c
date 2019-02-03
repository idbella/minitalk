/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haystackhaystack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 05:47:25 by sid-bell          #+#    #+#             */
/*   Updated: 2018/10/14 17:17:49 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	size_t	needle_lenght;
	size_t	haystack_lenght;
	int		i;

	i = 0;
	needle_lenght = ft_strlen(needle);
	haystack_lenght = ft_strlen(haystack);
	while (haystack_lenght >= needle_lenght)
	{
		if (!(str = ft_strsub(haystack, i, needle_lenght)))
			return (NULL);
		haystack_lenght = ft_strlen(str);
		if (!ft_strncmp(str, needle, needle_lenght))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
