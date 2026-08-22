/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 14:21:04 by dinis             #+#    #+#             */
/*   Updated: 2026/08/22 15:00:41 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*destiny;
	const unsigned char	*source;
	size_t				i;

	if (!dest && !src)
		return (dest);
	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	i = 0;
	while (i < count)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char src_str[] = "Hello, 42!";
//	char dest_str[20] = {0}; 
//	ft_memcpy(dest_str, src_str, 11);
//	printf("Source:      %s\n", src_str);
//	printf("Destination: %s\n", dest_str);
//	return (0);
//}