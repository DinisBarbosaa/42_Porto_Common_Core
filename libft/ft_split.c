/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 15:32:23 by dinis             #+#    #+#             */
/*   Updated: 2026/08/30 16:03:27 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	word;
	int	i;

	count = 0;
	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			word = 0;
		}
		i++;
	}
	return (count);
}

static char	**memory_handling(char **str, int size)
{
	while (size > 0)
	{
		size--;
		free(str[size]);
	}
	free(str);
	return (NULL);
}

static char	*next_word(char const *s, char character, int *index)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[*index + len] && s[*index + len] != character)
		len++;
	*index += len;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[*index - len + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		s_idx;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	s_idx = 0;
	while (i < words)
	{
		while (s[s_idx] && s[s_idx] == c)
			s_idx++;
		result[i] = next_word(s, c, &s_idx);
		if (!result[i])
			return (memory_handling(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}
