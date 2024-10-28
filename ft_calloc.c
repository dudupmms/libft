/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:03:43 by edpereir          #+#    #+#             */
/*   Updated: 2024/10/07 13:28:26 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	b;
	void	*p;

	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, b);
	return (p);
}
