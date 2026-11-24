/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinbarbo <dinbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 19:28:42 by dinis             #+#    #+#             */
/*   Updated: 2026/11/07 18:10:55 by dinbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	if (dstsize <= dst_size)
		return (dstsize + ft_strlen(src));
	i = dst_size;
	j = 0;
	while (j < dstsize - dst_size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_size + ft_strlen(src));
}

//#include <stdio.h>
//int main ()
//{
//	char a[100] = "Hello";
//	size_t myfunct = ft_strlcat(a, "Mundo", 5);
//	printf("%zu\n", myfunct);
//}