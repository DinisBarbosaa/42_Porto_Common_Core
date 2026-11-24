/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinbarbo <dinbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:31:01 by dinis             #+#    #+#             */
/*   Updated: 2026/11/07 14:41:28 by dinbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*n)
		return ((char *)h);
	i = 0;
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)(h + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
