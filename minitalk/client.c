/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:40:35 by iyarikan          #+#    #+#             */
/*   Updated: 2022/02/21 23:37:12 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_character_bits(int c, int pid)
{
	int				i;
	unsigned char	message_c;

	message_c = c;
	i = 128;
	while (i >= 1)
	{
		if (message_c / i)
		{
			message_c -= i;
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i /= 2;
	}
}

void	send_message(char *message, int pid)
{
	while (*message)
	{
		send_character_bits(*message, pid);
		message++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		message = argv[2];
		send_message(message, pid);
	}
}
