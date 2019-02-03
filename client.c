/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sid-bell <sid-bell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:31:21 by sid-bell          #+#    #+#             */
/*   Updated: 2019/02/03 04:10:18 by sid-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <signal.h>
#include "libft/libft.h"

void	ft_send2(int pid, char data)
{
	int i;
	char bit;

	i = 7;
	while(i >= 0)
	{
		bit = (data >> i) & 1;
		kill(pid, bit ? SIGUSR2 : SIGUSR1);
		usleep(200);
		i--;
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
			ft_send2(pid, v[2][i]);
			i++;
		}
		ft_send2(pid, 0);
	}
}
