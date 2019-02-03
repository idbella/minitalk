/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <sid-bell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:31:21 by sid-bell          #+#    #+#             */
/*   Updated: 2019/02/03 05:01:36 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_data
{
	char	c;
	int		pos;
}				t_data;

t_data data;
void	ft_catch(int sig)
{
	if (sig == SIGUSR2)
		data.c |= 1 << data.pos; 
	data.pos++;
	if (data.pos == 8)
	{
		data.pos = 0;
		if (!data.c)
			ft_putchar('\n');
		else
			ft_putchar(data.c);
		data.c = 0;
	}
}

int		main()
{
	data.c = 0;
	data.pos = 0;
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(30, ft_catch);
	signal(31, ft_catch);
	while(1)
		pause();
	return (0);
}