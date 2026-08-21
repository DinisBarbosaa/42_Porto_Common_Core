/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 23:47:16 by dinis             #+#    #+#             */
/*   Updated: 2026/08/21 23:51:13 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if (((character >= 'A' && character <= 'Z')
			|| (character >= 'a' && character <= 'z'))
		|| (character >= '0' && character <= '9'))
		return (1);
	return (0);
}

//#include <stdio.h>
//int main()
//{
//	int i;
//	i = ft_isalnum('M');
//	printf("%d" , i);
//}