/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinbarbo <dinbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:29:19 by dinis             #+#    #+#             */
/*   Updated: 2026/11/06 12:30:06 by dinbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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