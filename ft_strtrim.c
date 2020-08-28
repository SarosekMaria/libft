/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sassassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:59:50 by sassassi          #+#    #+#             */
/*   Updated: 2019/09/15 16:13:58 by sassassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_count(char const *s, size_t len, size_t *sp_begin,
		size_t *sp_end)
{
	size_t	i;
	char	*tmp;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		(*sp_begin)++;
		i++;
	}
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	tmp = ft_strrev(s);
	i = 0;
	while (tmp[i] == ' ' || tmp[i] == '\n' || tmp[i] == '\t')
	{
		(*sp_end)++;
		i++;
	}
	tmp = NULL;
	return (NULL);
}

static void	ft_init(size_t *sp_begin, size_t *sp_end, char const *s, char *str)
{
	size_t	i;
	size_t	i2;

	i = (*sp_begin);
	i2 = 0;
	while (i < ft_strlen(s) - (*sp_end))
	{
		str[i2] = s[i];
		i2++;
		i++;
	}
	str[i2] = '\0';
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	sp_begin;
	size_t	sp_end;

	sp_begin = 0;
	sp_end = 0;
	if (s == NULL)
		return (NULL);
	ft_count(s, ft_strlen(s), &sp_begin, &sp_end);
	if (sp_begin == sp_end && sp_begin == ft_strlen(s))
	{
		str = ft_strnew(0);
		return (str);
	}
	str = (char*)malloc(sizeof(char) *
			(ft_strlen(s) - sp_begin - sp_end + 1));
	if (str == NULL)
		return (NULL);
	ft_init(&sp_begin, &sp_end, s, str);
	return (str);
}
