/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:06:26 by dinis             #+#    #+#             */
/*   Updated: 2026/08/26 22:17:22 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*src;
	unsigned char		target;

	i = 0;
	src = (const unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == target)
		{
			return ((void *)(src + i));
		}
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char	str[] = "Hello, world!";
//	char	*result;

//	result = ft_memchr(str, 'w', 13);
//	if (result != NULL)
//	{
//		printf("was found: %s\n", result);
//	}
//	else
//	{
//		printf("not found.\n");
//	}
//	return (0);
//}