/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:45:01 by dinis             #+#    #+#             */
/*   Updated: 2026/08/28 17:27:12 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	string_len;
	size_t	i;

	if (!s)
		return (NULL);
	string_len = ft_strlen(s);
	if (start >= string_len)
		return (ft_strdup(""));
	if (len > string_len - start)
		len = string_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

//#include <stdio.h>
////char	*ft_substr(char const *s, unsigned int start, size_t len)
//int main ()
//{
//	char s2[] = "HELLOO";
//	char *ola;
//	ola = ft_substr(s2, 1, 5 );
//	if (ola)
//	{
//		printf("Result: %s\n", ola);
//        free(ola);
//	}
//	return (0);
//}