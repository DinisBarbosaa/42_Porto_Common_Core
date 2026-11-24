/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinbarbo <dinbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:24:31 by dinis             #+#    #+#             */
/*   Updated: 2026/11/06 12:29:55 by dinbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_str1;
	size_t	len_str2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len_str1 = ft_strlen(s1);
	len_str2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len_str1 + len_str2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
