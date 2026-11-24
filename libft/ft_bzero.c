/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinbarbo <dinbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 21:26:10 by dinis             #+#    #+#             */
/*   Updated: 2026/11/06 13:57:52 by dinbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "ola";
// 	int		i;
// 	ft_bzero(s, 2);
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("%d ", s[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }