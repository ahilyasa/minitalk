/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:51:48 by iyarikan          #+#    #+#             */
/*   Updated: 2022/02/21 23:42:10 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h> // signal()
# include <unistd.h> // getpid(), write()

void	ft_itoa(int pid);
int		ft_atoi(char	*str);

#endif
