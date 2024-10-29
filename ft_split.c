/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-las- <ide-las-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:21:21 by ide-las-          #+#    #+#             */
/*   Updated: 2024/10/02 21:21:21 by ide-las-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nofwords(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**allocate_split(int wd_count)
{
	char	**result;

	result = ((char **)ft_calloc((wd_count + 1), sizeof(char *)));
	return (result);
}

static char	*cpy_word(const char *start, const char *end)
{
	char	*word;
	int		len;

	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

static void	free_all(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	const char	*start;
	const int	wrd_count = nofwords(s, c);
	char		**result;

	result = allocate_split(wrd_count);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			start = s;
			while (*s != '\0' && *s != c)
				s++;
			result[i] = cpy_word(start, s);
			if (result[i] == NULL)
				return (free_all(result, i - 1), NULL);
			i++;
		}
		else
			s++;
	}
	return (result);
}
