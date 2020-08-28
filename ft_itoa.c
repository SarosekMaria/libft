/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:24:56 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/13 20:41:09 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_vspom(int n, int *nb, int *i)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			*i = 11;
			return (1);
		}
		*nb = (*nb) * (-1);
		(*i)++;
	}
	while (*nb)
	{
		*nb = (*nb) / 10;
		(*i)++;
	}
	return (0);
}

static char	*ft_help(char *s)
{
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

static void	ft_vspom_2(int n, char *s, int *nb, int *i)
{
	if (n < 0)
	{
		s[0] = '-';
		*nb = -n;
	}
	s[(*i)] = '\0';
	(*i)--;
	while (*nb)
	{
		s[(*i)] = (char)(((*nb) % 10) + 48);
		(*nb) = (*nb) / 10;
		(*i)--;
	}
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		nb;
	int		flag;

	nb = n;
	i = 0;
	if (nb == 0)
	{
		s = ft_strnew(1);
		s[0] = '0';
		return (s);
	}
	flag = ft_vspom(n, &nb, &i);
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	nb = n;
	if (flag == 1)
	{
		ft_help(s);
		return (s);
	}
	ft_vspom_2(n, s, &nb, &i);
	return (s);
}
