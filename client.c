/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <sid-bell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:31:21 by sid-bell          #+#    #+#             */
/*   Updated: 2019/02/03 04:34:33 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <signal.h>
#include "libft/libft.h"

void	ft_send(int pid, char data)
{
	int i;
	char bit;

	i = 0;
	while(i < 8)
	{
		bit = (data >> i) & 1;
		kill(pid, bit ? SIGUSR2 : SIGUSR1);
		usleep(200);
		i++;
	}
}

int		main(int y, char **v)
{
	int		i;
	int		pid;

	i = 0;
	if (y == 3)
	{
		pid = ft_atoi(v[1]);
		while (v[2][i])
		{
			ft_send(pid, v[2][i]);
			i++;
		}
		ft_send(pid, 0);
	}
}
