/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:06:35 by edpereir          #+#    #+#             */
/*   Updated: 2024/09/23 12:12:24 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	i = 0;
	x = s;
	while (i < n)
	{
		x[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
