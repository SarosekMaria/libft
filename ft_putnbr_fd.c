/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:19:56 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 17:19:59 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	s[11];
	int		i;
	int		flag;

	flag = (n < 0) ? (-1) : 1;
	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	n = n * flag;
	while (n)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	if (flag == -1)
		write(fd, "-", 1);
	while (i-- > 0)
		write(fd, &s[i], 1);
}
