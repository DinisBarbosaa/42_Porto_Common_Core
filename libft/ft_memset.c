/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:36:43 by dinis             #+#    #+#             */
/*   Updated: 2026/08/22 12:59:50 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char buf1[10];
//	char buf2[10];

//	memset(buf1, 'A', 6);
//	ft_memset(buf2, 'B', 6);

//	if (memcmp(buf1, buf2, 6) == 0)
//		printf("Right\n");
//	else
//		printf("Wrong\n");
//}