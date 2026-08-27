/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:29:19 by dinis             #+#    #+#             */
/*   Updated: 2026/08/27 15:44:34 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *source)
{
	int		i;
	size_t	len;
	char	*total;

	i = 0;
	len = ft_strlen(source);
	total = (char *)malloc(sizeof(char) * (len + 1));
	if (!total)
		return (NULL);
	while (source[i] != '\0')
	{
		total[i] = source [i];
		i++;
	}
	total[i] = '\0';
	return (total);
}

//#include <stdio.h>
//#include <stdlib.h>
//int	main(void)
//{
//	char	*original = "Hello, 42!";
//	char	*duplicate;
//	duplicate = ft_strdup(original);
//	printf("%s\n", original);
//	printf( "%s\n", duplicate);
//	free(duplicate);
//	return (0);
//}