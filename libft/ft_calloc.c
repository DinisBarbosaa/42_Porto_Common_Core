/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinis <dinis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:17:54 by dinis             #+#    #+#             */
/*   Updated: 2026/08/27 15:41:52 by dinis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*totalmemory;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	totalmemory = malloc(nmemb * size);
	if (!totalmemory)
		return (NULL);
	ft_bzero(totalmemory, size * nmemb);
	return (totalmemory);
}
