/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:47:44 by edpereir          #+#    #+#             */
/*   Updated: 2024/09/24 18:25:09 by edpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_srtlcat(char *dst, const char *src, size_t size)
{
	size_t	longdest;
	size_t	longsrc;
	size_t	cont;

	if (!dst || !src)
	{
		return (0);
	}
	longdest = ft_strlen(dst);
	longsrc = ft_strlen(src);
	if (size == 0 || size <= longdest)
	{
		return (longsrc + size);
	}
	cont = longdest;
	while (*src != '\n' && cont < (size -1))
	{
		*(dst + cont++) = *src++;
	}
	*(dst + cont) = '\0';
	return (longdest + longsrc);
}
