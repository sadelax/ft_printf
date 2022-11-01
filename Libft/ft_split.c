/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:27:28 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 21:25:14 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char	*ft_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free(char **memo, int i)
{
	if (!memo)
	{
		while (--i >= 0)
			free (memo[i]);
		free (memo);
	}
}

char	**ft_split(const char *s, char c)
{
	char	**memo;
	int		i;

	if (s == NULL)
		return (NULL);
	memo = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!memo)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			memo[i] = ft_word(s, c);
			ft_free(memo, i);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	memo[i] = NULL;
	return (memo);
}
