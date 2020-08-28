/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:22:03 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/11 20:23:51 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while ((s[i] != c) && s[i + 1])
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

static void	ft_vsp_2(size_t *i, char const *s, char c, size_t *length)
{
	while (s[*i] == c)
		(*i)++;
	while ((s[*i] != c) && s[*i])
	{
		(*length)++;
		(*i)++;
	}
}

static int	ft_vsp_3(char **argv, size_t *ind, size_t *length, size_t *i)
{
	argv[*ind] = (char*)malloc(sizeof(char) * (*length + 1));
	if (argv[*ind] == NULL)
	{
		while ((*ind)--)
			free(argv[*ind]);
		return (0);
	}
	*i = *i - *length;
	return (1);
}

static int	ft_vsp_1(size_t *count, char const *s, char c, char **argv)
{
	size_t	ind;
	size_t	length;
	size_t	index;
	size_t	i;

	ind = 0;
	i = 0;
	while (ind < *count)
	{
		length = 0;
		index = 0;
		ft_vsp_2(&i, s, c, &length);
		if (ft_vsp_3(argv, &ind, &length, &i) == 0)
			return (0);
		while (index < length)
		{
			argv[ind][index] = s[i];
			i++;
			index++;
		}
		argv[ind][index] = '\0';
		ind++;
	}
	argv[ind] = NULL;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**argv;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = ft_count_word(s, c);
	argv = (char**)malloc(sizeof(char*) * (count + 1));
	if (argv == NULL)
	{
		free(argv);
		return (NULL);
	}
	if (ft_vsp_1(&count, s, c, argv) == 0)
		return (NULL);
	return (argv);
}
